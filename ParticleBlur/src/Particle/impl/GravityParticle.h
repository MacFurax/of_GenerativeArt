#pragma once

#include "../behaviours/ParticleBehaviour.h"

class GravityParticle : public ParticleBehaviour
{
public:
  GravityParticle();
  ~GravityParticle();

  void Init(Particle& p);
  void Emmit(Particle& p);
  void Update(Particle& p, float deltaTime);
};