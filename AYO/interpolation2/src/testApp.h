#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{
    
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
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    ofPoint pointOnLine(float t, ofPoint p1, ofPoint p2);
    float from1X,from1Y,to1X,to1Y,p,pp,centerP;
    ofPoint from, to, circleCenter, from1, to1,p5,p6,p7,p8;
    ofPoint drawTwo(ofPoint p5, ofPoint p6, ofPoint p7, ofPoint p8, float p);
};