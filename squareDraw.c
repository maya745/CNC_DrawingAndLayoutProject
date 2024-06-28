#include <stdio.h>
#include <math.h>

int main(){

    //create length variable
    float maxLength;

    //get rectangle dimensions from user
    printf("What is the length of the square?  \n");
    scanf("%f", &maxLength);
    //now we have a maximum length
    
    //print coords without for loop
    printf("(0, 0) \n");
    printf("(0, %.2f) \n", maxLength);
    printf("(%.2f, %.2f) \n", maxLength, maxLength);
    printf("(%.2f, 0) \n", maxLength);
    printf("(0, 0) \n");        //the last point should be repeated to finish the shape

    return 0;
}