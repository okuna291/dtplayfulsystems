#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
   ofSetBackgroundAuto(false);
    p5.set(150,300);
    p6.set(300,600);
    p7.set(300,300);
    p8.set(200,500);
    
}

ofPoint testApp::drawTwo(ofPoint p5, ofPoint p6, ofPoint p7, ofPoint p8, float p){
   // p = ofClamp(p, 0, 1);
    
    ofLine(sin(ofGetElapsedTimef())*p7, cos(ofGetElapsedTimef())*p8);
    circleCenter= (p6 - p5) * p + p5;
    ofCircle(p*circleCenter, 2);
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//ofPoint testApp::pointOnLine(float t, ofPoint p1, ofPoint p2) {
//    t = ofClamp(t, 0, 1);
//    
//    return (p2 - p1) * t + p1;
//}

//--------------------------------------------------------------

void testApp::draw(){
    
    float t = ofGetElapsedTimef() - ((int)ofGetElapsedTimef());
    
    p = powf(1 - t, 2);
    
    
    
   drawTwo(p5, p6,p7,p8, p);
    
    //drawTwo(p5,p6,p7,p8,p);
    
    
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
    p8.set(x,y);
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