/* All we know is that it’s an unsigned integer type that can hold the size in bytes of anything you
can give to sizeof.

To print size_t use %zu and %zd for -vs size_t */

#include <stdio.h>

int main(){
    int a = 999;
    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof(2 + 7));
    printf("%zu\n", sizeof 3.142);

    size_t sizeof_int =  sizeof(int);
    size_t sizeof_double =  sizeof(double);

    printf("Size of int on this computer is %zu bytes\n", sizeof_int);
    printf("Size of double on this computer is %zu bytes\n", sizeof_double);

// It’s important to note that sizeof is a compile-time operation. 
// The result of the expression is determined entirely at compile-time, not at runtime.
    
}
