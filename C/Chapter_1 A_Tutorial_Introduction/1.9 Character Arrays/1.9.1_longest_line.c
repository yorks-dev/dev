/* Implement a code to find longest line 
 * First we need to get a line
 * Then we need to compare length and copy the longest to safe place.
*/

// PSEUDO CODE
/* 
 * while (theres another line)
 *  if (its longer than previous)
 *      (save it)
 *      (save its length)
 * print longest line.
*/


#include <stdio.h>  
#define MAX_BUFFER 1024      // line length cant be longer than this


int get_line(char line[]);   
//  return 0 if no line present else line length
void copy(char to[], char from[]);

int main() {
    
    char line[MAX_BUFFER], longest[MAX_BUFFER];
    int current_len, max_len= 0;
    

    while( (current_len = get_line(line)) > 0){
        if(current_len > max_len){
            max_len = current_len;
            copy(longest, line);
        }
    }
    if(max_len > 0)
        printf("Longest : \"%s\"\n", longest);
}

int get_line(char new_line[]) { 
//  return 0 if no line present else line length
    char c;
    int length = 0;

    while( (c = getchar()) != '\n' && c != EOF) {
        new_line[length++] = c;
    }
    
    new_line[length] = '\0';
    return length;
} 

void copy(char to[], char from[]) {
    
    int i = 0;
    while( (to[i] = from[i]) != '\0'){
        i++;
    }
}
 
