/*
 This program demonstrates the use of 
 the Standard C Library to read the 
 contents of a text file.
*/
#include <stdio.h>
#include <stdlib.h>

#define NUMITEMS 7

int main()
{
   FILE *data;
   char items[NUMITEMS];
   
   
   data = fopen("items.txt", "r");
   
   size_t nr = fread((void *) items, sizeof(char),              (size_t) NUMITEMS, data);
   
   if (nr != NUMITEMS)
      printf("Error, only %d items read\n", (int)nr);
   else
      for (int i = 0; i < NUMITEMS; i++)
      {
         printf("items[%d] = %c\n", i, items[i]);
      }
   
   
   return 0;
}
