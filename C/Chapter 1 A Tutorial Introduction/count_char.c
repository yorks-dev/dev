#include <stdio.h>

int main() {

    long num_char = 0;
    while(getchar() != EOF) {
        num_char++;
    }    
    printf("Number of Characters : %ld", num_char);
}
