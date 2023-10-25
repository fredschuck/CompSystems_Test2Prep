/*
 cmd_line_args.c
 
 
 This program demonstrates how to use 
 command-line arguments in a C program.
 
 */
#include <stdio.h>


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("No arguments given besides the program name.\n");
    }
    else
    {
        //  List the arguments
        printf("The command-line arguments are:\n");
        
        for (int i = 1; i < argc; i++)
            printf("%s\n", argv[i]);
        
        
        
        //  The same functionality code using pointers
        printf("\nUsing pointers:\n");
        
        for (char **p = &argv[1]; *p != NULL; p++)
            printf("%s\n", *p);
    }
    
    return 0;
}
