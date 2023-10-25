/*
 
 This program demonstrates essential 
 pointer operations: declaration, initialization, 
 and assignment. It also shows the use of the 
 address-of operator and of the indirection 
 operator. Finally, it shows how to print 
 address data to the console.
 
 */
#include <stdio.h>

int main(void)
{
    int v=2, w;
    int *pv;
    
    pv = &v;
    w = pv;
    
    printf("*pv=%d, w=%d, pv=%p\n", *pv, w, pv);
    
    *pv = 42;
    
    printf("*pv=%d, w=%d, pv=%p\n", *pv, w, pv);
    
    w = *pv;
    
    printf("v=%d, w=%d, pv=%p\n", v, w, pv);
    
    return 0;
}
