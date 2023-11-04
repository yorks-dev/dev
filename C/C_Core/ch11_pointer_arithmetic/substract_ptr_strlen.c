#include <stdio.h>

int my_strlen(char *string_ptr){
    
    char *starting_ptr = string_ptr;

    while(*string_ptr != '\0'){
        string_ptr ++;        
    }

    char *ending_ptr = string_ptr;

    int str_length = ending_ptr - starting_ptr; 

    return str_length;
}

int main(){

    printf("Enter string : ");
    char string[1024];
    scanf("%s", string);
    printf("Length : %d\n", my_strlen(string));
}