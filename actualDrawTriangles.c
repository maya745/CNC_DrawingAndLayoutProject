#include <stdio.h>
#include "myFunctions.h"
#include <stdbool.h>
#define _USE_MATH_DEFINES // Does this help for using pi?? Pi has been my biggest problem.

// Create structure for all sides and angles.
struct triangle {
    // Each side is opposite it's partner angle
    float sidea;
    float sideb;
    float sidec;

    float angleA;
    float angleB;
    float angleC;   // Not actually needed
};

int main () {

    // Start determining members of triangle

    // Create a structure variable of triangles called t1
    /* Note to me: This is necessary so the compiler knows which structure the variable comes from when called
    * because (for example), there could be multiple sidec under different structures.
    */
    struct triangle t1;

    // This program lets the input just three data points

    int sidesGiven;

    // Determine if it's a SAA, SSA, or SSS triangle
    printf("Are you going to provide 1, 2, or 3 sides? \n");
    scanf("%d", &sidesGiven);    

    // Start finding side and angle values (input must be integer)
    // Get first side length.
    printf("What is the length of the first side in mm?\n");
    scanf("%f", &t1.sidec);

    //
    // Find the remaining values based on sidesGiven
    // AAS/ASA      Note: check if this works for both AAS and ASA
    if (sidesGiven == 1) {
        // Get two more values
        printf("What is the degree value of the first adjacent angle?\n");
        scanf("%f", &t1.angleA);
        t1.angleA = t1.angleA * (3.14159/180.0); // Convert to radians

        printf("What is the degree value of the second adjacent angle?\n");
        scanf("%f", &t1.angleB);
        t1.angleB = t1.angleB * (3.14159/180.0); // Convert to radians


        // Calculate other angles and sides via law of sines
        // Find angleC (unneccessary) :(
        t1.angleC = 3.14159 - (t1.angleA + t1.angleB);
        
        // Find sideb (unneccessary)  :(
        t1.sideb = (sin(t1.angleB) / sin(t1.angleC)) * t1.sidec;
        
        // Find sidea (unneccessary)  :(
        t1.sidea = (sin(t1.angleA) / sin(t1.angleC)) * t1.sidec;

    //SAS
    } else if (sidesGiven == 2) { 
        // Get two more values
        printf("What is the length of the second side in mm?\n"); // Unneccessary
        scanf("%f", &t1.sidea);

        printf("What is the degree value of the included angle?\n");
        scanf("%f", &t1.angleB);
        t1.angleB = t1.angleB * (3.14159/180.0); // Convert to radians

        // Calculate other side and angles with law of cosines
        // Find sideb (unneccessary)  :(
        t1.sideb = sqrt(t1.sidea * t1.sidea + t1.sidec * t1.sidec - 2 * t1.sidea * t1.sidec * cos(t1.angleB));
        
        // Find angleA (unneccessary)  :(
        t1.angleA = acos((t1.sideb * t1.sideb + t1.sidec * t1.sidec - t1.sidea * t1.sidea) / (2 * t1.sideb * t1.sidec));
        
        // Find angleC (unneccessary)  :(
        t1.angleC = acos((t1.sidec * t1.sidec - t1.sidea * t1.sidea - t1.sideb * t1.sideb) / (-2 * t1.sidea * t1.sideb));
    
    // SSS
    } else {
        // Get two more values
        printf("What is the length of the second side in mm?\n");
        scanf("%f", &t1.sidea);

        printf("What is the length of the third side in mm?\n");
        scanf("%f", &t1.sideb);

        // Calculate the other angles
        // Find angleA (unneccessary) :(
        t1.angleA = acos((t1.sideb * t1.sideb + t1.sidec * t1.sidec - t1.sidea * t1.sidea) / (2 * t1.sideb * t1.sidec));
        
        // Find angleB
        t1.angleB = acos((t1.sidec * t1.sidec + t1.sidea * t1.sidea - t1.sideb * t1.sideb) / (2 * t1.sidec * t1.sidea));
        
        // Find angleC (unneccessary) :(
        t1.angleC = acos((t1.sidec * t1.sidec - t1.sidea * t1.sidea - t1.sideb * t1.sideb) / (-2 * t1.sidea * t1.sideb));

    }
    // Now we know what each side length and each angle equals

    // Define size of coordArray. One point per vertex
    int vertices = 3; 
    struct Coordinates coordArray[vertices];

    // Use array for each coordinate
    coordArray[0].xCoord = 0;
    coordArray[0].yCoord = 0;

    coordArray[1].xCoord = t1.sidec;
    coordArray[1].yCoord = 0;

    // Note: reference circle program
    coordArray[2].xCoord = t1.sidea * cos(t1.angleB);
    coordArray[2].yCoord = t1.sidea * sin(t1.angleB);

    // Call function to print coordinates from myFunctions library
    printCoordArray(coordArray, vertices);

    // Provide the side lengths and angles so finding them wasn't pointless
    printf("The side lengths are %.2f, %.2f, and %.2f.\n", t1.sidec, t1.sidea, t1.sideb);

    // Convert the angles to degrees. It might be useful to have an array of angles here.
    t1.angleC = t1.angleC * (180/3.14159);
    t1.angleA = t1.angleA * (180/3.14159);
    t1.angleB = t1.angleB * (180/3.14159);


    printf("The angles values are %.2f, %.2f, and %.2f in degrees.\n", t1.angleC, t1.angleA, t1.angleB);
    // :)

    return 0;
} 
