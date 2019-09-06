#pragma once

#include "ofMain.h"

class Particle
{
public:
  Particle();
  ~Particle();

  bool alive = false;
  
  
  ofVec2f pos = ofVec2f::zero(); // pos of particle
  ofVec2f size = ofVec2f(20.f, 20.f); // size
  ofVec2f acc = ofVec2f::zero(); // acceleration of particle
  ofVec2f speed = ofVec2f::zero(); // speed of particle
  // TODO see if orientation could be a vector ?
  float orientation = PI / 2.0f; // orientation of particle in RADIAN 

  float startTtl = 0; // start TTL
  float currentTtl = 0; // current TTL
  
  ofColor color = ofColor(255, 255);// current color
};

