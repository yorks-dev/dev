#include <stdio.h>

int main() {

    char arr[10] = "ten values";
    char* arr_ptr = arr; 
    for(int i = 0; i < 10; i++) {
        printf("arr[%d] = %c\n", i, arr[i]);
        printf("arr[%d] = %c\n", i, *arr_ptr++); // here i can increment arr_ptr
        printf("arr[%d] = %c\n", i, *(arr + i)); // here we cant do *arr++ because its an array not pointer
    
    }

}
