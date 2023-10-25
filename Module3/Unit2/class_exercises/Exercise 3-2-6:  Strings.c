/*************************************************************************************
    INSTRUCTIONS:
    Provide the C code to do the following:
    1) Declare a string (array of char) with the initial value "UNC Charlotte".
    2) Display the characters in the string, one at a time and on a separate line.
**************************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){
  char str[] = "UNC Charlotte";
    for (int i = 0; i < strlen(str); i++){
      printf("%c\n", str[i]);
    }
  return 0;
}

