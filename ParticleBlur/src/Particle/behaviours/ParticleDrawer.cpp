#include "ParticleDrawer.h"


ParticleDrawer::ParticleDrawer()
{
  //static_assert(std::is_base_of<Particle, PT>::value, "PT must derive from Particle");
}

ParticleDrawer::~ParticleDrawer()
{

}

void ParticleDrawer::Draw(Particle& p)
{
  ofSetColor(p.color);
  ofDrawCircle(p.pos, p.size.x);
}