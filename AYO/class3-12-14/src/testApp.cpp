#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    circleCenter.set(ofGetWidth()/2, ofGetHeight()/2);
destination.set(ofGetWidth()-50, ofGetHeight()/2);
    
}


//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------

void testApp::draw(){
    ofCircle(circleCenter,10);
    ofCircle(destination,10);
    
    
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