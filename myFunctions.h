#include <stdio.h>
#include <math.h>

struct Coordinates { 
    //create members
    float xCoord;       
    float yCoord;
};

void printCoordArray(struct Coordinates Array[], int vrtcs) {
       for (int i = 0; i < vrtcs; i++) {        //create for loop to print out the coordinate values
        printf("(%.2f, %.2f)\n", Array[i].xCoord, Array[i].yCoord);
    }
}
