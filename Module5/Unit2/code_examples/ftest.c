/*
 This program demonstrates the use of 
 the Standard C Library to read the 
 contents of a text file.
*/
#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 80

int main()
{
   FILE *data;  
   
   data = fopen("items2.txt", "r");

   while (!feof(data))
   {
      char line[LINE_LENGTH+1];
      char temp;
      
      //    Read the data
    //   fscanf(data, "%80[^\n]", line);
    fscanf(data, "%s", line);

      //    Now read and skip the "white-space"
      fscanf(data, "%c", &temp);


      printf("Read: %s\n", line);
   }

   fclose(data);   
   
   return 0;
}
