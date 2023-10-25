/*
 string_test.c
 
 This program demonstrates how to declare pointers to 
 string literals. Note that the code includes examples 
 of incorrect declarations. 
 
 You should try to uncomment these lines of code, recompile, 
 and re-run the program. Note that it will fail.
 */
#include <stdio.h>

int main()
{
   char *str1 = "This is string #1";
   
   char str2[] = "This is string #2";
   
   
   printf("str1 = %s\n", str1);
   
   printf("str2 = %s\n", str2);
   
   
   // The following declarations do NOT work
   // int *nums = {0, 1, 2, 3, 4};
   
   // char *str3 = {'T','h', 'i', 's', '\0'}; // No NULL char */
   // printf("str2 = %s\n", str3);

    
   return 0;
}
