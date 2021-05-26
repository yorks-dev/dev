#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int numel){
    for(int i = 0; i < numel; i++){
        printf("%d ", arr[i]);
    }
}

int compare(const void *elem1, const void *elem2){
    int *a = (int *) elem1;
    int *b = (int *) elem2;

    return *a - *b;
}

int main(){
    int arr[10] = {132, 2, 1, -5, 0, 3, -3, -7, 3, -10};
    printf("Before qsorr\n");
    print_array(arr, 10);

    qsort(arr, 10, sizeof(int), compare);

    printf("\n After qsorr\n");
    print_array(arr, 10);

}
