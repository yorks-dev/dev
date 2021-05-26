#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10
#define M 12

int main(){

    // create N pointers to double array.
    // So the malloc gives us a memory chunk that can hold N addresses
    double **arr2d_ptr = malloc(N * sizeof(void *));

    // Allocating memory at those mnemory locations
    for(int i = 0; i < N; i++){
        arr2d_ptr[i] = calloc(M, sizeof(double));
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            *(*(arr2d_ptr + i) + j) = 1; 
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%lf ", arr2d_ptr[i][j]);
        }
        printf("\n");
    }

    
}