#include <stdio.h>
#include <math.h>

struct Coordinates { 
    //create members
    float xCoord;       
    float yCoord;
};

int main() {

    //create length and width variables
    float maxWidth;
    float maxLength;

    //get rectangle dimensions from user
    printf("What is the length of the rectangle?  \n");
    scanf("%f", &maxLength);

    printf("What is the width of the rectangle?  \n");
    scanf("%f", &maxWidth);
    //now we have a maximum length and width

    //if statement that says if it's a square
    if (maxLength = maxWidth) {
        printf("Your shape is a square!\n");
    }

    int vertices = 4;

    struct Coordinates coordArray[vertices];

    //use arrays for each coordinate
    coordArray[0].xCoord = 0;
    coordArray[0].yCoord = 0;

    coordArray[1].xCoord = 0;
    coordArray[1].yCoord = maxWidth;

    coordArray[2].xCoord = maxLength;
    coordArray[2].yCoord = maxWidth;

    coordArray[3].xCoord = maxLength;
    coordArray[3].yCoord = 0;

    for (int i = 0; i < vertices; i++) { //create for loop to print out the coordinate values
        printf("(%.2f, %.2f)\n", coordArray[i].xCoord, coordArray[i].yCoord);
    }

    printf("(0, 0) \n");        //the last point should be repeated to finish the shape

    return 0;
}