#pragma once

#include "ofMain.h"
#include "ParticleEmitter.h"

class ParticleEmitterBehaviour
{
public:
  ParticleEmitterBehaviour();
  ~ParticleEmitterBehaviour();

  virtual void Init( ParticleEmitter pe);
  virtual void Update( ParticleEmitter pe );
  virtual void Emmit(ParticleEmitter pe);
};

