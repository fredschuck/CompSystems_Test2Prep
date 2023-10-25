/*
 This program demonstrates how to use the sizeof operator 
 to determine the size of various datatypes, 
 including a struct.
 */
#include <stdio.h>
#include <stdlib.h>

size_t tsz1, tsz2, tsz3, tsz4;
int a;
float b[100];

struct student
{
   char name[20];
   int age;
   char address[50];
} st;


int main(void) 
{
   struct student roster[100];
   
   tsz1 = sizeof (a);
   tsz2 = sizeof (b);
   tsz3 = sizeof (st);
   tsz4 = sizeof (roster);
   
   printf("sizeof (a) = %lu\n", tsz1);
   printf("sizeof (b) = %lu\n", tsz2);
   printf("sizeof (st) = %lu\n", tsz3);
   printf("sizeof (roster) = %lu\n", tsz4);
  
   exit(0);
}

   
