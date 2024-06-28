#include <stdio.h>
#include <math.h>

int main() {

    float pi = 3.14159265359;
    int radius = 20;

    float xCoord, yCoord;

    float theta;

    //function will calculate coordinates and print them
    void pointOnCircle(float theta) {
        xCoord = radius * cos(theta);     //value of x-coordinate. theta will increase over time
        yCoord = radius * sin(theta);     //value of y-coordinate. Similar to x-coord
        printf("(%.2f, %.2f)\n", xCoord, yCoord);

    }

    printf("Points on a circle of radius %d\n", radius);

    for (theta = 0; theta <= 2 * pi; theta += 0.1) { //for loop unitl finish circle
      pointOnCircle(theta);                          //call function that prints points
    }

      return 0;
}
