#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define BUFFER_SIZE 1024

int is_number(char str[], int len) {
    int i = 0;
    if(str[0] == '-') {
        i++;
    }
    while(i < len) {
        if(isdigit(str[i]) == 0){
            return -1;
        }
        i++;
    }
    return atoi(str);
}

int main() {

    printf("Enter file: ");
    char file[BUFFER_SIZE] = {0};
    fgets(file, BUFFER_SIZE, stdin);
    if(file[strlen(file) - 1] == '\n')
            file[strlen(file)-1] = '\0';
    
    FILE *fp_in = fopen(file, "r");
    if(fp_in == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    char buffer[BUFFER_SIZE] = {0};
    int product = 1;
    while(fgets(buffer, BUFFER_SIZE, fp_in)){
        int len = strlen(buffer) - 1;
        if(buffer[len] == '\n')
            buffer[len] = '\0';
        len = strlen(buffer);
        
        int num_return = is_number(buffer, len);
        if(num_return != -1)
            product *= num_return;
    }
    printf("%d\n", product);
}