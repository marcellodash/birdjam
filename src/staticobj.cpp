#include <nusys.h>

#include "staticobj.hpp"
#include "math.hpp"

#include "../models/objects/balloon/model_balloon.h"
#include "../models/objects/lunchtable/model_lunchtable.h"
#include "../models/objects/chair/model_chair.h"
#include "../models/objects/basket/model_basket.h"
#include "../models/objects/beer/model_beer.h"
#include "../models/objects/noodle/model_noodle.h"
#include "../models/objects/melon/model_melon.h"
#include "../models/objects/apple/model_apple.h"
#include "../models/objects/balloon_deflated/model_balloondeflated.h"
#include "../models/objects/beehive/model_beehive.h"
#include "../models/objects/bills/model_bills.h"
#include "../models/objects/card/model_card.h"
#include "../models/objects/flower/model_flower.h"
#include "../models/objects/necklace/model_necklace.h"
#include "../models/objects/ring/model_ring.h"
#include "../models/objects/soccer/model_soccer.h"
#include "../models/objects/stick/model_stick.h"
#include "../models/objects/table/model_table.h"
#include "../models/cat/model_cat.h"
#include "../models/chicken/model_chicken.h"
#include "../models/critic/model_critic.h"


// -------------------------------------------------------------------------- //

static Gfx * gObjMeshList[] =
{
    nullptr,
    cube_Cube_mesh,
    balloon_Balloon_mesh,
    lunchtable_Table_mesh,
    chair_Chair_mesh,
    basket_Basket_mesh,
    beer_Beer_mesh,
    noodle_Noodle_mesh,
    melon_Melon_mesh,
    apple_Apple_mesh,
    balloon_deflated_Balloon_Deflated_mesh,
    beehive_Beehive_mesh,
    bills_Bills_mesh,
    card_Cube_mesh,
    flower_Head_mesh,
    necklace_Necklace_mesh,
    ring_Ring_mesh,
    zedball_Zedball_mesh,
    stick_Stick1_mesh,
    table_Table_mesh,
    cat_Cat_mesh,
    chicken_Chicken_mesh
    critic_Critic_mesh,
    nullptr,
};

// -------------------------------------------------------------------------- //

void TObject::setPosition(TVec3<f32> const & pos)
{
    mPosition = pos;
}

void TObject::setRotation(TVec3<f32> const & rot)
{
    mRotation.set(rot.x(), rot.y(), rot.z());
}

void TObject::setScale(TVec3<f32> const & scale)
{
    mScale = scale;
}

void TObject::init()
{
    // ...
    mPosMtx.identity();
    mRotMtx.identity();
    mScaleMtx.identity();

    mRotation = TVec3<f32>(0.0f, 0.0f, 0.0f);
}

void TObject::update() {}

void TObject::draw()
{
    // ...
    
    //mtx.identity();
    //mtx.rotateEuler({0,angle,0});
    //mtx.floatToFixed(mtx, gBirdRot);

    TMtx44 temp1, temp2, temp3;
    
    mPosMtx.translate(mPosition);
    temp1.rotateAxis(TVec3<f32>(-TSine::scos(mRotation.y()), 0.0f, TSine::ssin(mRotation.y())), -mRotation.x());
    temp2.rotateAxisY(mRotation.y());
    TMtx44::concat(temp1, temp2, temp3);
    temp1.rotateAxis(temp3.mul(TVec3<f32>(0.0f, 0.0f, 1.0f)), mRotation.z());
    TMtx44::concat(temp1, temp3, mRotMtx);
    mScaleMtx.scale(mScale);

    TMtx44::floatToFixed(mPosMtx, mFPosMtx);
    TMtx44::floatToFixed(mRotMtx, mFRotMtx);
    TMtx44::floatToFixed(mScaleMtx, mFScaleMtx);
    
    gSPMatrix(mDynList->pushDL(), OS_K0_TO_PHYSICAL(&mFPosMtx),
	      G_MTX_MODELVIEW|G_MTX_MUL|G_MTX_PUSH);
    gSPMatrix(mDynList->pushDL(), OS_K0_TO_PHYSICAL(&mFScaleMtx),
	      G_MTX_MODELVIEW|G_MTX_MUL|G_MTX_PUSH);
    gSPMatrix(mDynList->pushDL(), OS_K0_TO_PHYSICAL(&mFRotMtx),
	      G_MTX_MODELVIEW|G_MTX_MUL|G_MTX_PUSH);
        
    if (mMesh != nullptr) {
        gSPDisplayList(mDynList->pushDL(), mMesh);
    }

    gSPPopMatrix(mDynList->pushDL(), G_MTX_MODELVIEW);
    gSPPopMatrix(mDynList->pushDL(), G_MTX_MODELVIEW);
    gSPPopMatrix(mDynList->pushDL(), G_MTX_MODELVIEW);
}

// -------------------------------------------------------------------------- //

Gfx * TObject::getMeshGfx(
    EObjType const type
) {
    if (type >= EObjType::INVALID) {
        return nullptr;
    }

    return gObjMeshList[(u32)type];
}

// -------------------------------------------------------------------------- //