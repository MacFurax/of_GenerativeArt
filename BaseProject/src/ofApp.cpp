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
  ofSetVerticalSync(false);

  lastFrameTime = ofGetElapsedTimeMillis();

  setupImGui();
}

void ofApp::setupImGui()
{

  //
  // load a different font
  //
  // uncomment and add fonts in data/fonts

  /*string fontPath = ofToDataPath("./fonts/Roboto-Regular.ttf", true);
  cout << "Load ImGui font from \n[" << fontPath << "]\n";

  int fontIdx = gui.addFont(fontPath, 16.0f);
  gui.SetDefaultFont(fontIdx);*/


  //
  // Init ImGui with docking
  //
  // uncomment to activate docking

  //gui.enableDocking();

  gui.setup();

  gui.setTheme(new ofxImGui::CorporateGreyTheme());
}

//--------------------------------------------------------------
void ofApp::update(){
  deltaTime = 0.001f*(float)(ofGetElapsedTimeMillis() - lastFrameTime);

  // your code come here


  lastFrameTime = ofGetElapsedTimeMillis();
}

//--------------------------------------------------------------
void ofApp::draw(){


  //must always be called last
  drawUI();
}

void ofApp::drawUI()
{
  gui.begin();

  // you ImGui code comes heres

  gui.end();
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
