
#include <nusys.h>

#include "collider.hpp"
#include "collision.hpp"
#include "dynlist.hpp"
#include "math.hpp"
#include "player.hpp"
#include "score.hpp"
#include "staticobj.hpp"

// -------------------------------------------------------------------------- //

TFlockObj * TFlockObj::sFlockObj { nullptr };
TTimer TTimer::sInstance;

// -------------------------------------------------------------------------- //

TFlockObj::TFlockObj(TDynList2 * dl) :
  TObject { dl }
{
  if (sFlockObj == nullptr) {
    sFlockObj = this;
  }
}

// -------------------------------------------------------------------------- //

TFlockObj::~TFlockObj() {
  if (sFlockObj == this) {
    sFlockObj = nullptr;
  }
}

// -------------------------------------------------------------------------- //

void TFlockObj::incFlock(u32 n, float strength) {
  mFlockSize += n;
  mStrength += strength;
}

// -------------------------------------------------------------------------- //

TNestObj::TNestObj(
  TDynList2 * dl, EObjType type,
  float radius, float weight
) :
  TObject { dl },
  mObjType { type },
  mObjRadius { radius },
  mObjWeight { weight }
{}

// -------------------------------------------------------------------------- //

void TNestObj::init() {
  TObject::init();
  setMesh(TObject::getMeshGfx(mObjType));
  initCollider(TAG_NESTOBJ, 0, TAG_PLAYER, 1);
  setCollideCenter(mPosition);
  setCollideRadius(mObjRadius);
}

// -------------------------------------------------------------------------- //

void TNestObj::update() {
  TObject::update();

  switch (mState) {
    case EState::CARRYING: {
      mPosition = mPlayer->getPosition();
      break;
    }
    case EState::DROPPING: {
      TCollFace const * gr;
      mPosition.y() -= 1.0F;

      gr = TCollision::findGroundBelow(
        mPosition, getCollideRadius()
      );

      if (gr != nullptr) {
        mPosition.y() = (gr->calcYAt(
          mPosition.xz()) + getCollideRadius()
        );

        mReceiveMask = TAG_PLAYER; // turn on collision
        mState = EState::IDLE;
      }

      break;
    }
  }
}

// -------------------------------------------------------------------------- //

void TNestObj::onCollide(
  TCollider * const other
) {
  if (mPlayer != nullptr) {
    return; // how did this happen?
  }

  // we can assume this is the player due to collision masks
  mPlayer = static_cast<TPlayer *>(other);
  mState = EState::CARRYING;
  mReceiveMask = 0; // turn off collision
}

// -------------------------------------------------------------------------- //

void TTimer::start(u32 seconds) {
  mTime = (float)seconds;
}

// -------------------------------------------------------------------------- //

bool TTimer::update() {
  if (mTime == 0.0F) {
    return true;
  }

  mTime -= (1.0F / 60.0F); // 60Hz

  if (mTime < 0.0F) {
    mTime = 0.0F;
  }

  return false;
}

// -------------------------------------------------------------------------- //

float TTimer::get(u32 * min, u32 * sec, u32 * ms) const {
  if (min != nullptr) {
    *min = (u32)(mTime / SEC_PER_MIN);
  }

  if (sec != nullptr) {
    *sec = ((u32)mTime % SEC_PER_MIN);
  }

  if (ms != nullptr) {
    *ms = ((u32)(mTime * MS_PER_SEC) % MS_PER_SEC);
  }

  return mTime;
}

// -------------------------------------------------------------------------- //