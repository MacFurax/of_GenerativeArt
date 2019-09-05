#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleBehaviour.h"

class ParticleBehaviour
{
public:
  ParticleBehaviour();
  ~ParticleBehaviour();

  virtual void Init(Particle& p);
  virtual void Update(Particle& p );

};
