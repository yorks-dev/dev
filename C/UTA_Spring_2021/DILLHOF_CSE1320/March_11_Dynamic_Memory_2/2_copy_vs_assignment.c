#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[] = "some string eith words\n";
    char *temp = NULL;

    char *token = strtok(str, " "); // some
    token = strtok(NULL, " ");  // string
    // temp = token;  // Now both temp and token pointing to same memory location

    temp = malloc(sizeof(char) * strlen(token) + 1);  // +1 for the null terminator
    strcpy(temp, token);

    token[0] = 'S';   

    printf("token = %s\n", token);
    printf("temp = %s\n", temp);

    free(temp); 

}