#include <stdio.h>

int sum_digit_rec(int num){

    if(num <= 9)
        return num;
    else
    {
        return num % 10 + sum_digit_rec(num / 10);
    }

}

int main(){

    int num;
    scanf("%d", &num);
    printf("%d\n", sum_digit_rec(num));

}