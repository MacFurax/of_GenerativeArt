#pragma once
#include "Particle.h"
class ParticleEmitter :
  public Particle
{
public:
  ParticleEmitter();
  ~ParticleEmitter();

  ofVec2f initacc;
  float spread; // spread of emitter in RADIAN

};
