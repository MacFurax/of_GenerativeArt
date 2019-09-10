#include "GravityParticle.h"

// TODO create particle behaviour that let particle 
// be influenced by a gravity

GravityParticle::GravityParticle()
{
}

GravityParticle::~GravityParticle()
{
}

void GravityParticle::Init(Particle& p)
{
  p.acc = ofVec2f::zero();
  p.speed = ofVec2f::zero();
}

void GravityParticle::Emmit(Particle& p)
{
  p.acc = ofVec2f::zero();
  p.speed = ofVec2f::zero();
}

void GravityParticle::Update(Particle& p, float deltaTime)
{
  /*p.acc += gravity * deltaTime;
  p.speed += p.acc;
  p.pos += p.speed;*/
  p.pos += gravity * deltaTime;
}

