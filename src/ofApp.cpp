#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//Setup the window
	ofBackground(0, 0, 0);
	ofSetCircleResolution(50);
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
    srand(time(NULL));

    while (stepCount < max_STEPS)
    {

        DIRECTION nextStep = static_cast <DIRECTION> (rand() % 4);

        switch (nextStep)
        {
        case NORTH:
            if (y > 0)
                y--;
            break;
        case EAST:
            if (x < Array_WIDTH - 1)
                x++;
            break;
        case SOUTH:
            if (y < Array_HEIGHT - 1)
                y++;
            break;
        case WEST:
            if (x > 0)
                x--;
            break;
        }
        stepCount++;
        nMapArray[x][y] = nMapArray[x][y]++;


    }

}


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //Draw out the drunk steps
    for (int a = 0; a < Array_WIDTH; a++)
    {
        for (int b = 0; b < Array_HEIGHT; b++)
        {
            float alpha = ofMap(nMapArray[a][b], 0, 20, 0, 255);
            ofSetColor(255, 0, 0, alpha);
            ofDrawRectangle(a*35, b* 35, 35, 35);

        }
    }
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
