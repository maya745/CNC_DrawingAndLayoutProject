#include <stdio.h>
#include <math.h>

int main() {

    float pi = 3.14159265359;
    int radius = 20;

    float xCoord, yCoord;

    float theta;

    void pointOnCircle(float theta) {  //A function giving point coordinate
        xCoord = radius * cos(theta); //value of x-coordinate. i is theta and increases over time
        yCoord = radius * sin(theta); //value of y-coordinate. Similar to x-coord
        printf("(%.2f, %.2f)\n", xCoord, yCoord);

    }

//int pointOnCircle[] = {}

    printf("Points on a circle of radius %d\n", radius);

    for (theta = 0; theta <= 2 * pi; theta += 0.1) { //for loop unitl finish circle
      pointOnCircle(theta);           //call function that prints points
    }

      return 0;
}