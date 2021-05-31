#include <stdio.h>

int powRec(int n){

    if(n == 1)
        return 1;
    else
    {
        return powRec(n - 1) * powRec(n - 1) + 1;
    }

}
int main(){

    int num;
    scanf("%d", &num);

    printf("%d\n", powRec(num));

}