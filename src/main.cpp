#include "ofMain.h"
#include "testApp.h"
#include "ofAppGlutWindow.h"

//========================================================================
int main( ){

    ofAppGlutWindow window;
<<<<<<< HEAD
	ofSetupOpenGL(&window, 320,240, OF_WINDOW);			// <-------- setup the GL context
=======
	ofSetupOpenGL(&window, 1024,768, OF_WINDOW);			// <-------- setup the GL context
>>>>>>> bd4638d6d12ee9afa4be48f9974c498934b221f4

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new testApp());

}
