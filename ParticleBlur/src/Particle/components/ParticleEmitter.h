#pragma once

#include "ofMain.h"
#include "Particle.h"

class ParticleEmitter : public Particle
{
public:
  ParticleEmitter();
  ~ParticleEmitter();

  ofVec2f initialAcc; // initial particle acceleration at emit
  float spread = 0.0f; // spread of emittion in RADIAN
  float emitFreq = 20.0f; // emit frequency emit/sec
  int emitBunch = 1; // how many particle emited per emit
  float currentTime = 0.0f;
  float lastEmiteTime = 0.0f;
};

