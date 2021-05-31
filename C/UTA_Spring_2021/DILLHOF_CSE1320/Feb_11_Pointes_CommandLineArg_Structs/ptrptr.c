#include <stdio.h>

void funf(int a[]){
    printf("sizeof(a) = %ld\n", sizeof(a));
}

int main(){
    int a[4] = {0};
    printf("sizeof(a) = %ld\n", sizeof(a));

    funf(a);

    int* ptr_arr[] = {0};
    int** ptr_ptr = ptr_arr;

    printf("sizeof(ptr_arr) = %ld\n", sizeof(ptr_arr));
    printf("sizeof(ptr_ptr) = %ld\n", sizeof(ptr_ptr));


    return 0;
}