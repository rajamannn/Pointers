// Program to print the Pointers
#include <stdio.h>

void view()
{
  int var =8;
   int *ptr;
    ptr = &var;

    printf("Value at ptr = %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
}
  int main()
{
  view();
    return 0;
}

