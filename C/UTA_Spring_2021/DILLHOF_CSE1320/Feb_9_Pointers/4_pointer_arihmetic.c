#include <stdio.h>

int main(){

    int val = 5;
    int *ptr = &val;

    printf("&val = %p\n", &val);
    printf("ptr = %p\n", ptr); // Address of ptr
    printf("*ptr = %d\n", *ptr); // Dereferancing
    printf("*ptr + 1 = %d\n", *ptr); // Standard Arithmetic
    printf("*(ptr + 1) = %d\n", *(ptr + 1)); // Incrementing the address and print garbage value
    printf("*&ptr = address of val variable = %p\n", *&ptr);

}