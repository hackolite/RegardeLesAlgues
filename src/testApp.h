#pragma once

#include "ofMain.h"
<<<<<<< HEAD
#include "ofxOpenCv.h"
=======
>>>>>>> bd4638d6d12ee9afa4be48f9974c498934b221f4

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
<<<<<<< HEAD

		ofVideoGrabber vidGrabber;
		ofxCvColorImage colorImg;
=======
>>>>>>> bd4638d6d12ee9afa4be48f9974c498934b221f4
};
