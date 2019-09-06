#pragma once

#include "ofMain.h"

#include "../components/Particle.h"


class ParticleDrawer
{
public:
  ParticleDrawer();
  ~ParticleDrawer();

  virtual void Draw(Particle& p);
};





