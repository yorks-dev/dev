#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p; // pointer to an int data type

    printf("Value of i is : %d\n", i);
    p = &i; // p now holds the pointer to the i var.
    *p = 20; //  dereference p pointer var to go to that address where i is ad change it to 20

    printf("Value of &i is : %p\n", (void *)&i);
    printf("Value of p is : %p\n", (void *)p);
    printf("Value of *p is : %d\n", *p);
    printf("Value of i is : %d\n", i);
    
    char arr[10];
    arr[112] = 'a';
  
}
