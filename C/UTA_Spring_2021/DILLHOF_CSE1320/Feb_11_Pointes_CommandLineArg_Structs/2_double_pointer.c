#include <stdio.h>

int main() {

    int a = 10;
    int* b = &a;
    int** c = &b;
    int*** d = &c;

    printf("d = %p\n", d); 
    printf("&c = %p\n", &c); 
 
    printf("*d = %p\n", *d);  // address of b
    printf("c = %p\n", c); // What c holds ? - address of b
    printf("&b = %p\n", &b); // Address of b print direct


    printf("**d = %p\n", **d);
    printf("***d = %d\n", ***d);




    return 0;
}