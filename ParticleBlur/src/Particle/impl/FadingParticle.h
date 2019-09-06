#pragma once

#include "../behaviours/ParticleBehaviour.h"


class FadingParticle : public ParticleBehaviour
{
public:
  FadingParticle();
  ~FadingParticle();

  void Init(Particle& p);
  void Emmit(Particle& p);
  void Update(Particle& p, float deltaTime);
};