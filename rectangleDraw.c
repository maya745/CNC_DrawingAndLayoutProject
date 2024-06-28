#include <stdio.h>
#include <math.h>

int main(){

    //create length and width variables
    float maxWidth;
    float maxLength;

    //get rectangle dimensions from user
    printf("What is the length of the rectangle?  \n");
    scanf("%f", &maxLength);

    printf("What is the width of the rectangle?  \n");
    scanf("%f", &maxWidth);
    //now we have a maximum length and width

    printf("Okay. The vertices for this rectangle are \n");
    
    //print coords without for loop
    printf("(0, 0) \n");
    printf("(0, %.2f) \n", maxWidth);
    printf("(%.2f, %.2f) \n", maxLength, maxWidth);
    printf("(%.2f, 0) \n", maxLength);
    printf("(0, 0) \n");        //the last point should be repeated to finish the shape

    return 0;
}