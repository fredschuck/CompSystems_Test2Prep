/*
 This program demonstrates the use of pointer arithmetic
 to access individual elements in an array.
 */
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char array_of_chars[5] = {'a', 'b', 'c', 'd', 'e'};
    char *char_array_ptr;
    
    int array_of_ints[7] = {1, 2, 3, 4, 5, 6, 7};
    int *int_array_ptr;
    
    
    //  Iterate over the elements of the character array
    printf("Contents of the Char Array:\n");
    
    for (char_array_ptr = array_of_chars; char_array_ptr < array_of_chars + 5; char_array_ptr++)
    {
        printf("char_array_ptr=%p (address), *char_array_ptr=%c (value at address)\n",
               char_array_ptr, *char_array_ptr);
    }
    
    
    //  Iterate over the elements of the integer array
    printf("\nContents of the Integer Array:\n");
    
    for (int_array_ptr = array_of_ints; int_array_ptr < array_of_ints + 7; int_array_ptr++)
    {
        printf("int_array_ptr=%p (address), *int_array_ptr=%d (value at address)\n",
               int_array_ptr, *int_array_ptr);
    }

    
    return 0;
}
