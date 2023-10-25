//
//  arrays.c
//
//  This program demonstrates the use of an
//  array to store and display integers.

#include <stdio.h>

int main()
{
   int list[5];  //array of size 5
   int i;
   
   
   printf("Please enter five numbers: ");
   
   for (i = 0; i < 5; i++)
      scanf("%d", &list[i]);
   
   
   printf("\n\nYou entered: \n");
   for (i = 0; i < 5; i++)
      printf("%d\n", list[i]);
   
   
   return 0;
}