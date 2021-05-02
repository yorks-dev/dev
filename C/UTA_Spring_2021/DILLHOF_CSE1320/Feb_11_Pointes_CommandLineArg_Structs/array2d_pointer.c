#include <stdio.h>

void print_array2d(int** arr, int dim1, int dim2){  // Double pinter because arr has pointer arreay full of pointers.

    for(int i = 0; i < dim1; i++){
        for(int j=0; j < dim2; j++){
            // printf("%2d ", arr[i][j]);
            printf("%2d ", *(*(arr + i) + j)); // prints the values
        }
        printf("\n");
    }

}

int main() {

    int row1[]  = {1, 2, 3, 4};
    int row2[] = {5, 6, 7, 8};
    int row3[] = {9, 10, 11, 12};
    int row4[] = {13, 14, 15, 16};

    int* ptr_arr[] = {
        row1, 
        row2,
        row3,
        row4
    };

    printf("ptr_arr + 0 = %p\n", ptr_arr + 0);
    printf("*(ptr_arr + 0) = %p\n", *(ptr_arr + 0));
    // printf("**(ptr_arr + 0) = %p\n", **(ptr_arr + 0));


    print_array2d(ptr_arr, 4, 4);
    return 0;
}