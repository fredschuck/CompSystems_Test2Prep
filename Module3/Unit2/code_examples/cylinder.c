/*********************************
 * Finds the volume and area of a 
 * cylinder using global variables
 ********************************/

#include <stdio.h>

#define PI 3.14

/********************************
 * Function for finding volume
 * and surface area of a cylinder
 *
 * Prototype (declaration) only
 *******************************/
void cyl (int, int);

double area, vol;

int main(void)
{
   int radius = 3;
   int height = 5;

   cyl (radius, height);

   printf("Surface Area: %.2f\nVolume: %.2f\n", area, vol);

   return 0;
}

/********************************
 * Function for finding volumn
 * and surface area of a cylinder
 *******************************/
void cyl (int r, int h)
{
   area = h * (2 * PI * r);
   vol = h * (r * r * PI);

}


