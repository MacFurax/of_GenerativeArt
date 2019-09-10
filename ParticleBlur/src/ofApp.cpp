#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

  // change to false if you don't want the amplication to close on ESC key pressed
  ofSetEscapeQuitsApp(true); 

  // Log settings
  ofSetLogLevel(OF_LOG_VERBOSE); // log level filter
  ofLogToFile("app.log"); // log to file data/app.Log

  // app title
  ofSetWindowTitle("App Title"); 
  
  // if you want your application to run as fast as possible leave this to false
  // be carrefull that when running at max speed, GPU/CPU heat up faster
  // you can also dynamically change it when needed
  ofSetVerticalSync(false);

  lastFrameTime = ofGetElapsedTimeMillis();


  //
  // your init code bellow
  //

  cout << "Start Setup\n";

  emitters[0].emitFreq = 40.0f;

  gravityParticleBehaviour.gravity = ofVec2f(0.0f, 100.0f);

  for (auto& p : particles)
  {
    for (auto& pe : emitters)
    {
      baseEmitter.Init(pe, p);
    }

    gravityParticleBehaviour.Init(p);
    fadingParticle.Init(p);
  }

  cout << "End Setup\n";

}

//--------------------------------------------------------------
void ofApp::update(){
  deltaTime = 0.0001f*(float)(ofGetElapsedTimeMillis() - lastFrameTime);

  //
  // your update code start here
  //

  // update emitters
  for (auto& pe : emitters)
  {
    baseEmitter.Update(pe, deltaTime);
  }

  // update 
  for (auto& p : particles)
  {
    if (p.alive)
    {
      // if particle is alive update his behaviour
      gravityParticleBehaviour.Update(p, deltaTime);
      fadingParticle.Update(p, deltaTime);
      
    }
    else {
      // check if an emitter is ready to emmit
      for (auto& emitter : emitters)
      {
        if (baseEmitter.Emmit(emitter, p))
        {
          // if particle is emmited
          // allow ParticleBehaviour to set emmit parameters of the particle
          gravityParticleBehaviour.Emmit(p);
          fadingParticle.Emmit(p);
        }
      }
    }
  } // for particles

  //
  // your update code stop here
  //

  lastFrameTime = ofGetElapsedTimeMillis();
}

//--------------------------------------------------------------
void ofApp::draw(){

  ofSetColor(0.0f);
  ofDrawCircle(100.f, 100.f, 30.f);

  for (auto& p : particles)
  {
    if (p.alive)
    {
      particleDrawer.Draw(p);
    }
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
