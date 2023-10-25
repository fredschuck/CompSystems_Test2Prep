/*
 This program provides an example 
 of incorrect use of the array size
 in a function call.
 
 */
#include <stdio.h>

#define TOTAL_ROWS 5
#define TOTAL_COLS 10


int getdays (int[][TOTAL_COLS]);


int main()
{
   int row, col;
   int years[TOTAL_ROWS][TOTAL_COLS] = {{0}};

   
   /*
    NOTE:
    Uncommenting line 31 below, the one with the array size included,
    produces compiler warnings and a program that fails when it executes.

    Uncommenting line 34 below produces a correct program.
    */
   
   // Incorrect function call
   //int result = getdays (years[TOTAL_ROWS][TOTAL_COLS]);
   
   // Correct function call
   //int result = getdays (years);

   
   
   for (row = 0; row < TOTAL_ROWS; row++)
   {
      for (col = 0; col < TOTAL_COLS; col++)
      {
         printf("%d ", years[row][col]);
      }
      
      printf("\n");
   }
   
   
   return 0;
}


int getdays (int year_table[][TOTAL_COLS])
{
   int row, col;
   
   for (row = 0; row < TOTAL_ROWS; row++)
   {
      for (col = 0; col < TOTAL_COLS; col++)
      {
         year_table[row][col] = col+1;
      }
   }
   
   return 1;
}
