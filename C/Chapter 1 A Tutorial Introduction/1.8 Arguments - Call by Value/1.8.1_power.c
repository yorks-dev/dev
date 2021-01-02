// Implement the power function in C
// CALL BY VALUE

#include <stdio.h>

int power(int base, int exp);
void power1(int arr[]);

int main() {
    
//     printf("%d\n", power(2, 4));
    for(int i = 0; i < 10; i++){
        
        printf("^%d %5.d %8.d\n", i, power(2, i), power(-2, i));  
        
        /* Here i is passed into the variable exp (exponent) and its coppied.
         The location of the exp variable is not passed, its coppied into a 
         seperate completely independedt variable exp.
         */
    }
    
    int array[2] = {1, 2};
    printf("ORIGINAL : %30.p\n", array); 
    power1(array);
        
    return 0;
}

int power(int base, int exp){
    
    int product = 1;
    
    for(int i = 1; i <= exp; i++){
        product *= base;
    }
    
    return product; // explain
}

void power1(int arr[]){     // Explain pass by value vs pass by reference

    printf("PASS BY REFERANCE ADDRESS : %p\n", arr);
}
