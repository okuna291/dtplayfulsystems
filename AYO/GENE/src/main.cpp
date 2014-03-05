#include "ofMain.h"
#include "testApp.h"
#include <stdio.h>

extern "C" {
#include <wiringPi.h>
}

//========================================================================
int main( ){
    
    if (wiringPiSetup() == -1)
        return 1 ;

	ofSetupOpenGL(800,600, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new testApp());

}
