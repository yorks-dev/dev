#include <stdio.h>

int main() {
    
    long i = 0;
    char string[100] = {};
    for(i=0; ((i <= 98) && (string[i] = getchar()) != '\n') ; i++); 
    string[i] = '\0';
    printf("%s  ,len = %ld\n", string, i);
}

