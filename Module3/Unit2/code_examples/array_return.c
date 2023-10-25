/*
 This program illustrates incorrect
 use of functions.
 
 Functions cannot return arrays, 
 nor can they return functions.
 */

 #include <stdio.h>

char readstring() [100] 
{

}

int main(void)
{
   char s[100];
  
   s = readstring();

   return 0;
}
