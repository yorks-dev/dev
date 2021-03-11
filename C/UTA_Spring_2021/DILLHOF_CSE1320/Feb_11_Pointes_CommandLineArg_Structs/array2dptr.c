#include <stdio.h>

int main() {

    int arr2d[3][3] = {0};
    // int *arr_ptr = arr2d;  // Will give warning
    
    int *arr_ptr = &arr2d[0][0];

    for(int i = 0; i < 3 * 3; i++)
        printf("*(arr_ptr + %d) = %d\n",i, *(arr_ptr + i));

} 