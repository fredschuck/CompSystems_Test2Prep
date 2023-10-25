/*
 This program demonstrates how to use the string utilities 
 library (string.h) to perform a lexicographical comparison 
 of two strings. Make sure that you understand the code. 
 
 Also, try using different words to see how the result changes.
 */
#include "stdio.h"
#include <string.h>

int main(void) {
   // Disable stdout buffering
   setvbuf(stdout, NULL, _IONBF, 0);
   
   
   char s1[30] = "Dog";
   //char s2[30] = "Cat";
   //char s2[30] = "Zebra";
   char s2[30] = "dog";
   
   if (strcmp(s1, s2) < 0) {
      printf("s1 less than s2\n");
      strcpy(s2, s1);
   }
   else if (strcmp(s1,s2) > 0) {
      printf("s2 less than s1\n");
      strcpy(s1, s2);
   }
   else if (strcmp(s1,s2) == 0) {
      printf("s1 and s2 are equal\n");
      strcpy(s1, s2);
      
      // Invoke the dog code
      //process_dog(...);
   }
   
   return 0;
}
