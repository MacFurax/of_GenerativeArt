#pragma once

#include "ofMain.h"
#include "ofxImGui.h"
#include "ofxXmlSettings.h"
#include "CorporateGreyTheme.h" 

class Particle
{
public:
  bool alive;
  glm::vec2 pos;
  glm::vec2 acc;
  glm::vec2 speed;

  glm::vec2 size;
  ofColor initialColor;
  ofColor currentColor;
  float initialTTL;
  float currentTTL;
};

class ofApp : public ofBaseApp{

	public:
		void setup();
    void setupImGui();
    void setupApp();
		void update();
		void draw();

    void drawUI();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    uint64_t lastFrameTime; // used to calculate deltaTime between frame
                            // see https://openframeworks.cc/documentation/utils/ofUtils/#show_ofGetElapsedTimeMillis
                            // this value is reset if calling ofResetElapsedTimeCounter()
                          // so if you need to call ofResetElapsedTimeCounter() you can have issues with detaTime
    float deltaTime = 0; // in seconds
		
    ofxImGui::Gui gui;

    // start you definition here
    std::vector<Particle> particles = std::vector<Particle>(1000);

    const uint64_t        particleSpawnInterval = 500;
    uint64_t              lastParticleSpawn = 0;

    ofFbo                 canvas;
    
};
