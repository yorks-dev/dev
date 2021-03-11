/**
 * Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
 
 * So what is wants us to do is convert the tabs in the input by spaces. So if there is \t it should by #### (say \t is 4 spaces)(can be 8 or anything according to use case).
 
 */
    
/* Should the \t size be a variable or symbolic constant.
 > Symbollic coonstant because we dont want it to ever change in a single text file.
*/

/* PROCESS
 * SET TAB LENGTH say 4
 * Take Input using getchar(...)  // won't use gets yet
 * Iterate over the input line, and when we find \t we call the function replace_tab(...) and replace the tab with 4 spaces in the new array.
 * Print the new Array
*/

#include <stdio.h>
#include <string.h>

#define TABLEN 7
#define MAX_BUFFER 1024   

int replace_tab(char output[MAX_BUFFER * TABLEN], int index) {
    
    int i;
    for(i = index; i <= index + (TABLEN - 1); i++)
        output[i++] = '!';
    
    return i;
}

int main() {
    
    char input[MAX_BUFFER] = {0};
    char output[MAX_BUFFER * TABLEN] = {0};
//     Take input
    
    char c;
    int index = 0;
    
    while( (c = getchar() ) != EOF) 
    {
        input[index++] = c;
    }
    
    input[index] = '\0';
    
    for(int i = 0; input[i] != '\0'; i++){
        
        if(input[i] == ' '){
            output[i] = '#';
            output[i+1] = '#';
            output[i+2] = '#';
            i = i+3;
        }
        else
            output[i] = input[i];
        
        output[i] = '\0';
    }
    
    for(int i = 0; i < strlen(output); i++) {
        printf("%c", output[i]);
    }
    
//     char a[5] = {'a', '\t', '|', '\t', 'b'}; 
//     printf("%s", a);
}

