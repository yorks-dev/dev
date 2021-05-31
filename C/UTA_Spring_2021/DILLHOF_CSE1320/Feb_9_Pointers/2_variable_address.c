#include <stdio.h>

int main(){

    int a = 10;
    int *a_ptr = &a;

    printf("%p -> %p has %d\n", &a_ptr, a_ptr, *a_ptr);


}