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
  p.color = ofColor::greenYellow;

}

void BaseEmitter::Update(ParticleEmitter& pe, float deltaTime)
{
  // move or rotate emitter here
  pe.currentTime += deltaTime;
}

bool  BaseEmitter::Emmit(ParticleEmitter& pe, Particle &p)
{
  // emitte particle
  if (pe.currentTime - pe.lastEmiteTime >= 1.0f / pe.emitFreq)
  {
    if (!p.alive)
    {
      p.alive = true;
      p.pos = pe.pos;
      p.acc = ofVec2f(0.0f, 0.1f);
      return true;
    }
  }
  return false;
}
