#include <stdio.h> 

int main() {
    
    int c;
    int check = 0;
    while(check = (c = getchar() != EOF)) {
        printf("%d\n", check);
        putchar(c);
    }
    printf("%d\n", check);
    printf("VALUE OF EOF -> %d\n", EOF);
}

