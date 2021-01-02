#include <stdio.h>

int main() {
    
/**
    // Procedure 1
    int c;    
    c = getchar();

    while(c != EOF) {     // EOF -> ctrl + D (Unix) 
        putchar(c);
        c = getchar();
    }

*/
    // Procedure 2
        
    printf("hello\n");
    int cc;
    while((cc = getchar()) != EOF) {
        putchar(cc);
    }

}
