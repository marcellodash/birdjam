
#ifndef INCLUDE_HUD_HPP
#define INCLUDE_HUD_HPP

#include <nusys.h>

#include "score.hpp"
#include "sprite.hpp"
#include "util.hpp"

// -------------------------------------------------------------------------- //

class THudAlarm {

  public:

  THudAlarm() = default;
  ~THudAlarm() = default;

  float get() const;
  float get(float min, float max) const;

  void set(float);
  bool update();
  bool off() const;

  private:

  float mTime { 0.0F };
  float mAlarm { 0.0F };

};

// -------------------------------------------------------------------------- //

class THudScore {

  public:

  THudScore() = default;
  ~THudScore() = default;

  void hide();
  void show();
  void lower();
  void raise();

  u32 getScore() const;
  void setScore(u32);

  void init();
  void update();
  void draw();

  private:

  enum {

    ST_HIDE,
    ST_SHOW,
    ST_UP,
    ST_DOWN,
    ST_LOWER,
    ST_RAISE

  };

  enum : u32 {

    SPR_SCORE,
    SPR_SCORE_0,
    SPR_SCORE_1,
    SPR_SCORE_2,
    SPR_SCORE_3,
    SPR_SCORE_4,
    SPR_SCORE_5,

    NUM_SPRITES,

    NUM_SCORE_DIGITS = 6

  };

  int mState { ST_HIDE };
  THudAlarm mStateTimer;
  float mCurScore { 0.0F };
  u32 mFinScore { 0 };
  float mBounceTime { 0.0F };
  TSprite mSprite[NUM_SPRITES];
  u32 mSpriteMask { 0 };

  void setOffSprite(u32 i) { mSpriteMask |= (1U << i); }
  void setOnSprite(u32 i) { mSpriteMask &= ~(1U << i); }

};

// -------------------------------------------------------------------------- //

class THudTime {

  public:

  THudTime() = default;
  ~THudTime() = default;

  void hide();
  void show(u32 min);
  void lower();
  void raise();
  void flash(u32 min);

  void init();
  void update(TTimer const *);
  void draw();

  private:

  enum {

    ST_HIDE,
    ST_SHOW_WAIT,
    ST_SHOW_SLIDE,
    ST_UP,
    ST_DOWN,
    ST_LOWER,
    ST_RAISE

  };

  enum : u32 {

    SPR_TIME,
    SPR_MIN,
    SPR_COLON,
    SPR_SEC_0,
    SPR_SEC_1,

    NUM_SPRITES

  };

  int mState { ST_HIDE };
  THudAlarm mStateTimer;
  u32 mFlashMin { 0 };
  float mFlashTime { 0.0F };
  TSprite mSprite[NUM_SPRITES];
  u32 mSpriteMask { 0 };

  void setOffSprite(u32 i) { mSpriteMask |= (1U << i); }
  void setOnSprite(u32 i) { mSpriteMask &= ~(1U << i); }

};

// -------------------------------------------------------------------------- //

class THudCountDown {

  public:

  THudCountDown() = default;
  ~THudCountDown() = default;

  void hide();
  void show();

  void init();
  void update();
  void draw();

  private:

  enum {

    ST_HIDE,
    ST_READY_IN,
    ST_READY,
    ST_READY_3,
    ST_READY_2,
    ST_READY_1,
    ST_FLY,
    ST_FLY_OUT

  };

  enum : u32 {

    SPR_HEADER,
    SPR_DIGIT,

    NUM_SPRITES

  };

  int mState { ST_HIDE };
  THudAlarm mStateTimer;
  TSprite mSprite[NUM_SPRITES];
  u32 mSpriteMask { 0 };

  void setOffSprite(u32 i) { mSpriteMask |= (1U << i); }
  void setOnSprite(u32 i) { mSpriteMask &= ~(1U << i); }

};

// -------------------------------------------------------------------------- //

class THud {

  public:

  THud() = default;
  ~THud() = default;

  void init();
  void update();
  void draw();

  u32 getScore() const;
  void addScore(u32 pts);
  void subScore(u32 pts);

  void startCountDown(u32 minutes);
  bool isCountedDown() const;
  bool isTimeUp() const;

  static void splitDigits(u32, u32[], u32);
  static Sprite const & getDigitSprite(u32);

  private:

  enum {

    ST_HIDE,
    ST_COUNTDOWN,
    ST_SHOW,
    ST_TIME_FLASH

  };

  int mState { ST_HIDE };
  THudAlarm mStateTimer;
  u32 mTimeLimit { 0 };
  TTimer mClock;
  THudCountDown mCountDown;
  THudScore mScore;
  THudTime mTime;

};

// -------------------------------------------------------------------------- //

extern THud * gHud;

// -------------------------------------------------------------------------- //

#endif