/*************************************************************************************
    INSTRUCTIONS:
    Part A - Write the code for a function named cube_volume. The function takes one 
    parameter, the side (or edge) of a cube, and calculates the volume of a cube. 
    Assume that all values are of type float.
        > Hint: The formula to calculate the volume of a cube is V = x3, where x is the 
        length of the side.
    Part B - Provide the code that would be used in main() to use the function 
    (call it or invoke it) and display the result that it returns. 
**************************************************************************************/

#include <stdio.h> 

float cube_volume(float); 

float main(void) 
{ 
    float num = 0;
    printf("Enter a number: ");
    scanf("%g", &num);
    float volume = cube_volume(num);
    printf("\nVolume = %g\n", volume); 
} 

float cube_volume(float x) 
{ 
    return x*x*x; 
}