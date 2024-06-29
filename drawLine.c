#include <stdio.h>
#include <math.h>
#include "myFunctions.h"

struct line {
    float length;
    float angle;
};

int main () {

    struct line l1;

    // Get length and angle
    printf("What is the length of the line?\n");
    scanf("%f", &l1.length);

    printf("At what angle is the line?\n");
    scanf("%f", &l1.angle);
    l1.angle = l1.angle * (3.14159/180); // Convert to radians

    int vertices = 2;
    struct Coordinates coordArray[vertices];

    // Define points
    coordArray[0].xCoord = 0;
    coordArray[0].yCoord = 0;

    coordArray[1].xCoord = l1.length * cos(l1.angle);
    coordArray[1].yCoord = l1.length * sin(l1.angle);

    // Print coordinates
    printCoordArray(coordArray, vertices);

    return 0;
}