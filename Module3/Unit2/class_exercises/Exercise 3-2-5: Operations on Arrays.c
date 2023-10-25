/*************************************************************************************
    INSTRUCTIONS:
    Write a small program that does the following:
    1) Declares an array big enough to store five (5) elements of type float.
    2) Uses a for loop to read the numbers from the console (user input).
    3) Uses another for loop to add the numbers (sum) and calculate their average.
    4) Displays the result of the sum and the average.
**************************************************************************************/

#include <stdio.h>

int main(void){
    float array[5];
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++){
        scanf("%f", &array[i]);
    }

    float sum = 0.0;
    for (int i = 0; i < 5; i++){
        sum += array[i];
    }

    printf("Sum = %.2f\nAverage = %.2f\n", sum, sum/5.0);
    return 0;
}