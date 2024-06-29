#include <stdio.h>
#include <math.h>
#include "myFunctions.h"

//create length and width variables
    const float maxWidth;
    const float maxLength;

int main() {

    //get rectangle dimensions from user
    printf("What is the length of the rectangle?  \n");
    scanf("%f", &maxLength);

    printf("What is the width of the rectangle?  \n");
    scanf("%f", &maxWidth);
    //now we have a maximum length and width

    //if statement that says if it's a square
    if (maxLength == maxWidth) {
        printf("Your shape is a square!\n");
    }

    int vertices = 4; //define size of coordArray
    struct Coordinates coordArray[vertices];

    //use array for each coordinate
    coordArray[0].xCoord = 0;
    coordArray[0].yCoord = 0;

    coordArray[1].xCoord = 0;
    coordArray[1].yCoord = maxWidth;

    coordArray[2].xCoord = maxLength;
    coordArray[2].yCoord = maxWidth;

    coordArray[3].xCoord = maxLength;
    coordArray[3].yCoord = 0;           //final vertex

    //call function from myFunction library
    printCoordArray(coordArray, vertices);    

    return 0;
}
