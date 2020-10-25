#include <stdio.h>

// We gonna count the number of '\n' present 
int main() {
    
    int c, count;
    while((c=getchar()) != EOF) {
        if(c == '\n') {
            count ++;
        }
    }
    printf("\nNumber of Lines : %d", count+1);
}
