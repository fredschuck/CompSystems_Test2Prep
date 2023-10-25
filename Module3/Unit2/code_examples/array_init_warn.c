/*
 array_init_warn.c
 
 This program provides examples of array initialization code 
 that produce compiler warnings and/or incorrect output.
 
 */

#include <stdio.h>

void explicit_length_no_initialization();
void explicit_length_fully_initialized();
void explicit_length_partial_initialization();
void implicit_length_fully_initialized();
void implicit_length_partial_initialization();

int main(void) 
{

   explicit_length_no_initialization();
   explicit_length_fully_initialized();
   explicit_length_partial_initialization();
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
   int my_array[3] = {1, 2, 3, 4};
   int i;
    
   for (i = 0; i < 4; i++) {
      printf("%d ", my_array[i]);
   }
   printf("\n");

}
void explicit_length_partial_initialization() 
{
   int my_array[3] = {[0] = 1, [2] = 3};
   int i;
    
   for (i = 0; i < 3; i++) {
      printf("%d ", my_array[i]);
   }
   printf("\n");

}

void implicit_length_fully_initialized() 
{
   int my_array[] = {1, 2, 3};
   int i;
    
   for (i = 0; i < 3; i++) {
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
