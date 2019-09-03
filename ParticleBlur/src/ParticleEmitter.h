#pragma once
#include "Particle.h"
class ParticleEmitter :
  public Particle
{
public:
  ParticleEmitter();
  ~ParticleEmitter();

  ofVec2f strength;
  float spread; // speard of emitter in RADIAN

  virtual void emit(Particle p)
  {
    p.alive = true;
    p.currentTtl = p.startTtl;
    p.pos = this->pos;

  }

};

