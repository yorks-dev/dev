#include <stdio.h>

int push(int stack[], int size, int val){
    stack[size] = val;   // size grows with value inserted
    return size + 1;
}

int pop(int stack[], int *size){
    return stack[--(*size)];   // and also returnto show
}

int main(){

    int stack[10] = {0};
    int size = 0;  // size is 0 initially

    size = push(stack, size, 1);
    size = push(stack, size, 21);
    size = push(stack, size, 33);
    size = push(stack, size, 55);

    for(int i = 0; i < size; i++){
        printf("data : %d\n", stack[i]);
    }

    int popped = pop(stack, &size);
    printf("Popped : %d\n", popped);
    
    for(int i = 0; i < size; i++){
        printf("data : %d\n", stack[i]);
    }

    return 0;
}