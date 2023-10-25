/*
 
 string.c
 
 This program shows the use of arrays to store string data.
 
 */

#include <stdio.h>

int main(void) 
{
    char st1[] = {'a','b','c','d'};

    printf("%s\n", st1);
    
    
    
    char st2[] = "abcde"
                    " more stuff"
                    "even more stuff" ;
    
    printf("%s\n", st2);
    
    
    char st3[6] = {'a','b','c','d','e', '\0'};
    
    printf("%s\n", st3);
   
    printf("%c\n", st3[3]);

    
    return 0;
}
