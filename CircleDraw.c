#include <stdio.h>
#include <math.h>

    const int radius = 20;

    float xCoord, yCoord;

    float theta;

    //A function giving point coordinate
    void pointOnCircle(float theta) {
        xCoord = radius * cos(theta); //value of x-coordinate. i is theta and increases over time
        yCoord = radius * sin(theta); //value of y-coordinate. Similar to x-coord
        printf("(%.2f, %.2f)\n", xCoord, yCoord);
    }

int main() {

    printf("Points on a circle of radius %d\n", radius);

    for (theta = 0; theta <= 2 * 3.14159; theta += 0.1) { //for loop unitl finish circle, use M_PI if possible
      pointOnCircle(theta);           //call function that prints points
    }

    //give initial point again
    theta = 0;
    pointOnCircle(theta);

      return 0;
}
