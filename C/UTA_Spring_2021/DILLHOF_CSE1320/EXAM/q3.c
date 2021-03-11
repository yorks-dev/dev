#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    int rev = 0;
    while(num > 0){
        int dig = num % 10;
        rev = rev * 10 + dig;
        num /= 10;
    }

    printf("%d\n", rev);

}
