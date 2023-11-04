#include <stdio.h>

void double_array(int *a, int len){
    for(int i = 0; i < len; i++){
        // a[i] *= 2;
        *a *= 2; // de-referencing the ptr and multiplying it by 2
        a++;   // advancing the pointer
    }
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int len_arr = sizeof(a)/sizeof(int);
    
    for(int i = 0; i < len_arr; i++){
        printf("%d ", a[i]);
    }

    double_array(a, len_arr);
    printf("\n");
    
    for(int i = 0; i < len_arr; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
