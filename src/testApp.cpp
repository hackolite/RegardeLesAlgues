#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
<<<<<<< HEAD
	int l_x = 320;
	int l_y = 240;
	vidGrabber.setVerbose(true);
	vidGrabber.initGrabber(l_x,l_y);
	colorImg.allocate(l_x,l_y);
=======
>>>>>>> bd4638d6d12ee9afa4be48f9974c498934b221f4
}

//--------------------------------------------------------------
void testApp::update(){
<<<<<<< HEAD
	int l_x = 320;
	int l_y = 240;
	bool bNewFrame = false;
	ofBackground(0,0,0);
	
	vidGrabber.grabFrame();
	bNewFrame = vidGrabber.isFrameNew();
	
	if(bNewFrame){
		colorImg.setFromPixels(vidGrabber.getPixels(),l_x,l_y);
	}
=======
>>>>>>> bd4638d6d12ee9afa4be48f9974c498934b221f4
}

//--------------------------------------------------------------
void testApp::draw(){
<<<<<<< HEAD
	ofSetHewColor(0xffffff);
	colorImg.draw(0,0);
=======

>>>>>>> bd4638d6d12ee9afa4be48f9974c498934b221f4
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

<<<<<<< HEAD
}
=======
}
>>>>>>> bd4638d6d12ee9afa4be48f9974c498934b221f4
