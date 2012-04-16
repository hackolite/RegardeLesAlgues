#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	int l_x = 320;
	int l_y = 240;
	vidGrabber.setVerbose(true);
	vidGrabber.initGrabber(l_x,l_y);
	colorImg.allocate(l_x,l_y);
}

//--------------------------------------------------------------
void testApp::update(){
	int l_x = 320;
	int l_y = 240;
	bool bNewFrame = false;
	ofBackground(0,0,0);
	
	vidGrabber.grabFrame();
	bNewFrame = vidGrabber.isFrameNew();
	
	if(bNewFrame){
		colorImg.setFromPixels(vidGrabber.getPixels(),l_x,l_y);
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetHewColor(0xffffff);
	colorImg.draw(0,0);
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

}
