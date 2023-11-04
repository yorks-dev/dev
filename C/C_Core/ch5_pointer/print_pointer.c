/* how to print the address of a variable or how to print
the pointer to a variable or data type*/

#include <stdio.h>

int main(){
    int i = 10;

    printf("The value of i is : %d\n", i);
    printf("The address of i or pointer to i : %p\n", (void *) &i);
}