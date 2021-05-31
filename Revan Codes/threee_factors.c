#include <stdio.h>

int factor_find(int factor[]){
    
    int num_fact = 0;  // Prime
    for(int i = factor[0]; i >= 1; i--){
        if(factor[0] % i == 0){
            factor[num_fact++] = i;
        } 
        if(num_fact == 3) break;
    }

    if(factor[1] == 1) return 1;   // 1 -> prime
    else return 0;   // 0 -> not prime
}

int main() {
    
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int factor[3] = {num, 1, 1};
    
    int is_prime = factor_find(factor);
    
    for(int i = 0; i < 3; i++){
        printf("%d\n", factor[i]);
    }

    if(is_prime)
        printf("%d is prime!\n", factor[0]);

}
