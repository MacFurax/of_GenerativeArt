#pragma once

#include "ofMain.h"
#include "../components/Particle.h"

class ParticleBehaviour
{
public:
  ParticleBehaviour();
  ~ParticleBehaviour();

  virtual void Init(Particle& p);
  virtual void Emmit(Particle& p);
  virtual void Update(Particle& p, float deltaTime );

};
