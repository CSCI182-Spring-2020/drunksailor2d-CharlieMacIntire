#pragma once
#include <time.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ofMain.h"
using namespace std;
#define Array_WIDTH 20
#define Array_HEIGHT 20
#define max_STEPS 1000

#include "ofMain.h"


class ofApp : public ofBaseApp{


private:
   // Draw Rect
    glm::vec2 rectPosition;
        float rectSize;
    ofColor rectColor;

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

        enum DIRECTION { NORTH, EAST, SOUTH, WEST };
        int nMapArray[Array_WIDTH][Array_HEIGHT];

        

            int x = Array_WIDTH / 2;
            int y = Array_HEIGHT / 2;
            int stepCount = 0;

            
       
};




/*
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define Array_WIDTH 20
#define Array_HEIGHT 20
#define max_STEPS 1000

enum DIRECTION{NORTH, EAST, SOUTH, WEST};
int nMapArray[Array_WIDTH][Array_HEIGHT];

int main()
{

    int x = Array_WIDTH / 2;
    int y = Array_HEIGHT / 2;
    srand(time(NULL));
    int stepCount = 0;

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
            if (y < Array_HEIGHT- 1)
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

    //Printing out the drunk steps
    for (int a = 0; a < Array_WIDTH; a++)
    {
        for (int b = 0; b < Array_HEIGHT; b++)
        {
            std::cout << nMapArray[a][b] << "  ";
        }
        std::cout << endl;
    }
}
*/