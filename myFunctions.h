#include <stdio.h>
#include <math.h> // For math
#include <windows.h> // For sleeping

struct Coordinates { 
    //create members
    float xCoord;       
    float yCoord;
};

void printCoordArray(struct Coordinates Array[], int vrtcs) {
    
    Sleep(100);
    printf("Okay. Here's your points:\n");

    Sleep(100);
       for (int i = 0; i < vrtcs; i++) {        //create for loop to print out the coordinate values
        printf("(%.2f, %.2f)\n", Array[i].xCoord, Array[i].yCoord);
    }

    printf("(0.00, 0.00)  \n");        //the last point should be repeated to finish the shape
}
