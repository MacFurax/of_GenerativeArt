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
}

//--------------------------------------------------------------
void ofApp::update(){
  deltaTime = 0.0001f*(float)(ofGetElapsedTimeMillis() - lastFrameTime);

  // your code come here


  lastFrameTime = ofGetElapsedTimeMillis();
}

//--------------------------------------------------------------
void ofApp::draw(){

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
