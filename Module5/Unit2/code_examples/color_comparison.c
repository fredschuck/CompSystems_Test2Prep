/*
 This program shows that the names of enumeration constants 
 must be different from other identifiers declared in the
 enclosing scope. The program as provided will not compile.
 
 This program also illustrates that variables of different
 enumerated data types should not be compared. 
 
 Note that to test this, you need to address the comment 
 in the code to fix the compilation error.
 */
#include <stdio.h>

int main()
{
   /*
    Move the next line of code to before main 
    to fix the compilation error.
    */
   enum {blue, red, green, white, black} primarycolor;
   enum {black, brown, orange, yellow} halloweencolor;

   primarycolor = black;
   halloweencolor = black;

   printf("%d %d\n", primarycolor, halloweencolor);

   if (primarycolor == halloweencolor)
   {
      printf("Same color\n");
   }
   else
   {
      printf("Different color\n");
   }

   return 0;
}
