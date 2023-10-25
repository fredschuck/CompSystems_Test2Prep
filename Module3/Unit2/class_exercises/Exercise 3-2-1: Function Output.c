/*************************************************************************************
    INSTRUCTIONS:
    Write a function g() with two int parameters x and y, that computes the sum and
    product of x and y.  The sum is a global variable, and  the product is the value 
    returned by g().
**************************************************************************************/

#include <stdio.h> 

int g(int, int); 

int sum;

int main(void) 
{ 
    int product = g(3, 4); 
    printf("Sum=%d\n", sum); 
    printf("Product=%d\n", product); 
} 

int g(int x, int y) 
{ 
    sum = x+y;
    return x*y;
}