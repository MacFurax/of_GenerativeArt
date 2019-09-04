#pragma once

#include "ofMain.h"
#include "Particle.h"

class ParticleEmitter : public Particle
{
public:
  ParticleEmitter();
  ~ParticleEmitter();

  ofVec2f initacc;
  float spread; // spread of emittion in RADIAN
  float emmitFreq;

};

