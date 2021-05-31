#include <stdio.h>
#include <math.h>

int powRec(int term){

    if(term == 1)
        return 1;

    int num = pow(powRec(term - 1), 2) + 1;
    return num;

}

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
        printf("%d ", powRec(i));
}