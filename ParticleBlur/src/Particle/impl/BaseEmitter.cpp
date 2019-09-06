#include "BaseEmitter.h"

BaseEmitter::BaseEmitter()
{

}

void BaseEmitter::Init(ParticleEmitter& pe, Particle &p)
{
  pe.pos = ofVec2f(ofGetWindowWidth(), ofGetWindowHeight()) / 2.0f;
  pe.currentTime = 0.0f;
  pe.lastEmiteTime = 0.0f;

  p.alive = false;

}

void BaseEmitter::Update(ParticleEmitter& pe, float deltaTime)
{
  // move or rotate emitter here
  pe.currentTime += deltaTime;
}

bool  BaseEmitter::Emmit(ParticleEmitter& pe, Particle &p)
{
  // emitte particle
  if (!p.alive)
  {
    if ((pe.currentTime - pe.lastEmiteTime) >= (1.0f / pe.emitFreq))
    {
      cout << "Emmite\n";
      p.alive = true;
      p.pos = pe.pos;
      p.acc = ofVec2f::zero();
      pe.lastEmiteTime = pe.currentTime;
      return true;
    }
  }
  return false;
}
