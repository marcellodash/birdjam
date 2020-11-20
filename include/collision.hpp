
#ifndef INCLUDE_COLLISION_HPP
#define INCLUDE_COLLISION_HPP

#include <nusys.h>

#include "math.hpp"

// -------------------------------------------------------------------------- //

class TCollision {

  public:

  struct TFace {

    TVec3F v0, v1, v2;
    TVec3F nrm;
    float d;

    void calc();

    bool isGround() const;
    bool isCeiling() const;
    bool isWall() const;

    float calcDist(TVec3F const & pt) const;

    private:

    static bool calcNrm(
      TVec3F const & v0,
      TVec3F const & v1,
      TVec3F const & v2,
      TVec3F * nrm
    );

  };

  static bool startup(TFace data[], u32 size);
  static void shutdown();

  static void calc();

  static u32 checkRadius(
    TVec3F const & pt, float r,
    TFace const * faces[] = nullptr, u32 limit = 0
  );

  static TFace const * findClosest(
    TVec3F const & pt, float r = 0.0F
  );

  private:

  static TFace * sCollFaceAry;
  static u32 sNumCollFace;

};

// -------------------------------------------------------------------------- //

using TCollFace = TCollision::TFace;
using ECollFind = TCollision::EFind;

// -------------------------------------------------------------------------- //

#endif
