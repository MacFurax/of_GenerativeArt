#include "FadingParticle.h"

// TODO define a particle behaviour that fade with time
// fading mean color/alpha/... change between birth to dead

FadingParticle::FadingParticle()
{
}

FadingParticle::~FadingParticle()
{

}

void FadingParticle::Init(Particle& p)
{
  p.startTtl = 5.0f; // particle live 5 seconds
  p.color = startColor;
}

void FadingParticle::Emmit(Particle& p)
{
  p.currentTtl = p.startTtl;
  p.color = startColor;
  p.startSize = ofVec2f(20.0f, 20.0f);
}

void FadingParticle::Update(Particle& p, float deltaTime)
{
  p.currentTtl -= deltaTime;
  float liveRatio = 1.0f - ((p.startTtl - p.currentTtl) / p.startTtl);
  p.color.lerp( endColor, 1.0f - liveRatio);
  p.size = p.startSize * liveRatio;

  if (p.currentTtl <= 0.0f)
  {
    p.alive = false;
  }
}