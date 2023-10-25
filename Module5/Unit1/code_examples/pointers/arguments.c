/*
 This program demonstrates the use of pointers as function
 arguments. This program uses pointers to swap the values 
 of two variables. Note the use of either a pointer variable 
 or an address in the call to the swap function in main.
 */
 #include <stdio.h>

void swap(int *px, int *py);
void swap_no_ptr(int x, int y);

int main(void)
{
   int i = 100, j = 500;
   int *p1 = &i, *p2 = &j;
    
   printf("%d %d %p %p\n", i, j, p1, p2);
  
   // NOTE: Either one of the following lines
   //       of code is correct.
   swap(p1, p2);
   //swap(&i, &j);
    
   printf("%d %d %p %p\n", i, j, p1, p2);
   
   return 0;
}

void swap(int *px, int *py) {
   int temp = *px;
   *px = *py;
   *py = temp;
   px = py = NULL;
}

void swap_no_ptr(int x, int y) {
   printf("i=%d j=%d\n", x, y);
   
   int temp = x;
   x = y;
   y = temp;
   
   printf("i=%d j=%d\n", x, y);
}
