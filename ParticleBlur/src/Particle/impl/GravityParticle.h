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

  ofVec2f gravity = ofVec2f(0.0f, -1.0f);
};