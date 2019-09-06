#pragma once

#include "ofMain.h"

// particle components
#include "Particle/components/Particle.h"
#include "Particle/components/ParticleEmitter.h"

// particle implemented behaviours
#include "Particle/impl/BaseEmitter.h"
#include "Particle/impl/GravityParticle.h"
#include "Particle/impl/FadingParticle.h"

#include "Particle/behaviours/ParticleDrawer.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

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


    //
    // Start you project definition bellow
    //

    // components
    std::vector<Particle> particles = std::vector<Particle>( 2000 );
    std::vector<ParticleEmitter> emitters = std::vector<ParticleEmitter>(1);

    // behavious
    //std::vector<ParticleEmitterBehaviour> emitterBehaviours = std::vector<ParticleEmitterBehaviour>();
    std::vector<ParticleBehaviour> particleBehaviours = std::vector<ParticleBehaviour>();
    
    //  always use a single emitter
    BaseEmitter baseEmitter;

    // can use multiple ParticleBehaviour
    GravityParticle gravityParticleBehaviour;
    FadingParticle fadingParticle;

    // a single particle drawer
    ParticleDrawer particleDrawer;

};
