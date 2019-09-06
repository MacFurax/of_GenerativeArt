#pragma once

#include "ofMain.h"
#include "../components/Particle.h"
#include "../components/ParticleEmitter.h"

class ParticleEmitterBehaviour
{
public:
  ParticleEmitterBehaviour();
  ~ParticleEmitterBehaviour();

  virtual void Init( ParticleEmitter& pe, Particle &p);
  virtual void Update( ParticleEmitter& pe, float deltaTime);
  virtual bool Emmit(ParticleEmitter& pe, Particle &p);
};

