#pragma once

#include "ofMain.h"
#include "ParticleEmitter.h"

class ParticleEmitterBehaviour
{
public:
  ParticleEmitterBehaviour();
  ParticleEmitterBehaviour( std::vector<ParticleEmitter>& emitters);
  ~ParticleEmitterBehaviour();

  void SetEmitters(std::vector<ParticleEmitter>& emitters);
  virtual void Init();
  virtual void Update();
  virtual void Emmit();
};

