/*
 This program provides an example
 of implicit type conversion on
 a function call.
 */
#include <stdio.h>

void u (char c);


int main()
{
   double g = 12345678.0;

   u(g);

   printf("g = %f\n", g);

    
   g = 100;
   u(g);
    
   printf("g = %f\n", g);

}


void u (char c)
{
   printf("c = %c (character) %d (int)\n", c, c);
}
