#include <stdio.h>

int foo(void); // Function prototype (declare)

int main(){
    int i;
    i = foo();
    printf("%d\n", i);
}

int foo(void){      //defination
    return 69;
}

/* NOTE - printf() is decleared in stdio.h */
