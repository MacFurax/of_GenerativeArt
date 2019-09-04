#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleBehaviour.h"

class ParticleBehaviour
{
public:
  ParticleBehaviour();
  ParticleBehaviour(std::vector<Particle>& particles);
  ~ParticleBehaviour();

  void SetPaticles(std::vector<Particle>& particles);

  virtual void Init();
  virtual void Update();


  std::vector<Particle> particles;

};
