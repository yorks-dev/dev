#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 10

void remove_newline(char *str){
    if(str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
}

int main(){

    /* STATIC STRING ALOCATION */

    // char buffer[BUFF_SIZE] = {0};

    // printf("Enter a string.\n");
    // fgets(buffer, BUFF_SIZE, stdin);

    // remove_newline(buffer);
    // printf("%s\n", buffer);
    
    
    /* DYNAMIC ALOCATION OF STRING */

    char buffer[BUFF_SIZE] = {0};
    char *str = NULL;
    size_t size = 0;
    int length = strlen(buffer);

    while(buffer[length - 1] != '\n'){
        fgets(buffer, BUFF_SIZE, stdin);
        length = strlen(buffer);

        if(str){   // if str is not NULL
            size = (strlen(str) + length) * sizeof(char);
        } else{     // str is NULL
            size = length * sizeof(char);
        }

        str = realloc(str, size);
        strcat(str, buffer);

        if(str == NULL){
            printf("ERROR: Couldn't allocate memory.\n");
            return 1;
        }
    }

    printf("%s", str);              
    free(str);  

    return 0;

}






