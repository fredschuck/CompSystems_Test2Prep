/*
 This program provides an example 
 of the need to declare a function
 before its use.
 */
#include <stdio.h>


/*
 NOTE:
 Uncomment the following line of code
 to correct the error.
 */
//float f(float x, float y);


int main()
{
   float w, x, y;

   x = 3, y = 2.9;

   w = f (x, y);

   printf("%.2f\n", w);

   return 0;

}


float f(float x, float y)
{
   return x * y;
}

