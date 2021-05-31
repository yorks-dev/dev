#include <stdio.h>
#include <stdlib.h>

#define M 8
#define N 4

// INDEX 1D array as a 2D array

int main(){

    // int arr[M][N] = {0};
    int *arr2 = NULL;

    arr2 = malloc(sizeof(int) * M * N);
    
    int count = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            arr2[count++] = (i + 1) * (j + 1);
        }
    }

    // to get index we can use (i * M + j)
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d\t",arr2[i * M + j]);
        }
        printf("\n");
    }
}