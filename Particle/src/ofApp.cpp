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

  _lastFrameTime = ofGetElapsedTimeMillis();


  setupImGui();

  // you initialisation is done in setupApp()
  setupApp();
}

//--------------------------------------------------------------
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

  _gui.setup();

  _gui.setTheme(new ofxImGui::CorporateGreyTheme());
}

//--------------------------------------------------------------
void ofApp::setupApp()
{
  _lastParticleSpawn = _lastFrameTime-1;
  ofFboSettings fboSettings;

  fboSettings.width = ofGetWindowWidth();
  fboSettings.height = ofGetWindowHeight();
  fboSettings.internalformat = GL_RGBA;
  fboSettings.textureTarget = GL_TEXTURE_2D;

  _canvas.allocate(fboSettings);
}

//--------------------------------------------------------------
void ofApp::update(){

  _deltaTime = 0.001f*(float)(ofGetElapsedTimeMillis() - _lastFrameTime);

  // your code come here
  for (auto& particle : _particles)
  {
	// update particle
	if (particle.alive)
	{
		updateParticle(particle, _deltaTime);
	}

	// check if we spawn a new particle
	if (_lastFrameTime >= _lastParticleSpawn + _particleSpawnInterval && !particle.alive)
	{
	  _lastParticleSpawn = _lastFrameTime;
	  particle.alive = true;

	  spawnParticle(particle);

	  
	}
  }

  //
  _lastFrameTime = ofGetElapsedTimeMillis();
}

//--------------------------------------------------------------
void ofApp::draw()
{
  // draw to canvas
  
  _canvas.begin();
  ofBackground(255);
  for (auto& particle : _particles)
  {
	if (particle.alive)
	{
	  // draw particle
		drawParticle(particle);
	}
  }
  _canvas.end();

  // draw canvas 
  _canvas.draw(0.f, 0.f);



  //must always be called last
  drawUI();
}

//--------------------------------------------------------------
void ofApp::drawUI()
{
  _gui.begin();

  // you ImGui code comes heres

  _gui.end();
}

void ofApp::updateParticle(Particle& particle, float deltaTime)
{
	// update pos
	particle.pos += particle.speed * deltaTime;
	particle.currentTTL -= deltaTime;
	if (particle.currentTTL < 0.0f)
	{
		particle.alive = false;
	}
}

void ofApp::spawnParticle(Particle& particle)
{
	particle.pos = ofGetWindowSize() / 2.0f;
	particle.currentColor = ofColor(ofRandom(255), ofRandom(255), ofRandom(255), 150);
	particle.size.x = 40.0f + ofRandom(40.0f);
	particle.size.y = 40.0f + ofRandom(40.0f);
	particle.initialTTL = 5.f + ofRandom(20.f);
	particle.currentTTL = particle.initialTTL;

	float orientation = ofRandom(360.0f);
	float speed = 10.f + ofRandom(15.0f);
	particle.speed.x = glm::sin(orientation) * speed;
	particle.speed.y = glm::cos(orientation) * speed;
}

void ofApp::drawParticle(Particle& particle)
{
	ofSetColor(particle.currentColor);
	float size = particle.size.x * (particle.currentTTL / particle.initialTTL);
	ofDrawCircle(particle.pos, size);
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
