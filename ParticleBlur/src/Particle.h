#pragma once

#include "ofMain.h"

class Particle
{
public:
  Particle();
  ~Particle();

  bool alive = false;
  
  ofVec2f pos = ofVec2f(0.0f, 0.0f); // pos of particle
  ofVec2f acc = ofVec2f(0.0f, 0.0f); // acceleration of particle
  ofVec2f speed = ofVec2f(0.0f, 0.0f); // speed of particle
  // TODO see if orientation could be a vector ?
  float orientation = PI / 2.0f; // orientation of particle in RADIAN 

  float startTtl = 0; // start TTL
  float currentTtl = 0; // current TTL
  
  ofColor color = ofColor(255, 255);// current color
};

