// Implement the power function in C

#include <stdio.h>

int power(int base, int exp);

int main() {
    
//     printf("%d\n", power(2, 4));
    for(int i = 0; i < 10; i++){
        printf("^%d %5.d %8.d\n", i, power(2, i), power(-2, i));  // explain
    }
        
    return 0;
}

int power(int base, int exp){
    
    int product = 1;
    
    for(int i = 1; i <= exp; i++){
        product *= base;
    }
    
    return product; // explain
}
