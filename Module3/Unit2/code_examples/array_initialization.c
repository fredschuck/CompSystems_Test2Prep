/*
 
 array_initialization.c

 This program provides several examples of array initialization code.
 
 */
 
#include <stdio.h>

void explicit_length_no_initialization();
void explicit_length_fully_initialized();
void explicit_length_partial_initialization();
void explicit_length_partial_initialization_v2();
void implicit_length_fully_initialized();
void implicit_length_partial_initialization();

int main(void) 
{

   explicit_length_no_initialization();
   explicit_length_fully_initialized();
   explicit_length_partial_initialization();
   explicit_length_partial_initialization_v2();
   implicit_length_fully_initialized();
   implicit_length_partial_initialization();

   return 0;
}


void explicit_length_no_initialization()
{
   int my_array[3];
   int i;

   for (i = 0; i < 3; i++) {
      printf("%d ", my_array[i]);
   }
   printf("\n");

}


void explicit_length_fully_initialized()
{
   int my_array[3] = {1, 2, 3};
   int i;
    
   for (i = 0; i < 3; i++) {
      printf("%d ", my_array[i]);
   }
   printf("\n");

}


void explicit_length_partial_initialization() 
{
   int my_array[30] = {0, 1};

   int i;
    
   for (i = 0; i < 30; i++) {
      printf("%d ", my_array[i]);
   }
   printf("\n");

}


void explicit_length_partial_initialization_v2()
{
   int my_array[30] = {[0] = 1, [2] = 3, [14] = 5};
   
   int i;
   
   for (i = 0; i < 30; i++) {
      printf("%d ", my_array[i]);
   }
   printf("\n");
   
}


void implicit_length_fully_initialized() 
{
   int my_array[] = {1, 2, 3, [45] = 80};
   int i;
    
   for (i = 0; i < 46; i++) {
      printf("%d ", my_array[i]);
   }
   printf("\n");
}


void implicit_length_partial_initialization()
{
   int my_array[] = {[0] = 1, [2] = 3};
   int i;
    
   for (i = 0; i < 3; i++) {
      printf("%d ", my_array[i]);
   }
   printf("\n");
}
