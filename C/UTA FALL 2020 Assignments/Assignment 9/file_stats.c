#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int wd_counter(char buffer[]){
    char last_char = buffer[0];
    int num_wd = 1;
    for(int i = 0; i < strlen(buffer); i++) {
        
        if(buffer[i] == ' ' && last_char != ' '){
            num_wd++;
        }
        last_char = buffer[i];
    }
    return num_wd;
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
    int char_num = 0, word_num = 0;

    while(fgets(buffer, BUFFER_SIZE, fp_in)){
        if(buffer[strlen(buffer) - 1] == '\n')
            buffer[strlen(buffer)-1] = '\0';

        char_num += strlen(buffer);
        word_num += wd_counter(buffer);
    }
    printf("Word count: %d\n", word_num);
    printf("Character count: %d\n", char_num);
}