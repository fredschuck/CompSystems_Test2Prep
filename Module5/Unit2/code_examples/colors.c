/*
 This program demonstrates the use of 
 an enumerated data type (enum).
 */
#include <stdio.h>

int main(void)
{
   enum colors {blue, red, green, white, black} primarycolor;

   primarycolor = black;

   printf("%d\n", primarycolor);

   return 0;

}
