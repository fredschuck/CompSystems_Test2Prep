/*
 This program demonstrates the use of the ungetc function 
 while processing an input stream.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*  
 This program reads input words, prints one word per line
 No spaces between words, but each new word starts with
 a capital letter (e.g. "DogCatBirdFishBee")
 */

int main()
{
   char s[100], *p = s;
   while (((*p = getc(stdin)) != EOF) && (*p != '\n')) {
      if ((p > s) && (isupper(*p))) {
         ungetc(*p, stdin);
         *p = '\0';
         printf("Word: %s\n", s);
         p = s;
      }
      else
         p++;
   }
   printf("Word: %s\n", s);

   return 0;
}
