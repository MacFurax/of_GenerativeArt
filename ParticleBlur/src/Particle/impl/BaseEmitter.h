#pragma once

#include "../behaviours/ParticleEmitterBehaviour.h"

class BaseEmitter : public ParticleEmitterBehaviour
{
  public:
    BaseEmitter();

    void Init(ParticleEmitter& pe, Particle &p);
    void Update(ParticleEmitter& pe, float deltaTime);
    bool Emmit(ParticleEmitter& pe, Particle &p);


};

