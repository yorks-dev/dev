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


int get_line(void);   
//  return 0 if no line present else line length
void copy(void);

// Global Variables
int max_len=0;    //max length seen so far (declearing)
char line[MAX_BUFFER], longest[MAX_BUFFER];

int main() {

    int current_len;
    extern int max_len;
    extern char longest[MAX_BUFFER]; // extern redundunt

    while( (current_len = get_line()) > 0){
        if(current_len > max_len){  
            // here we dont need extern keyword since in same file.
            max_len = current_len;
            copy();
        }
    }
    if(max_len > 0)
        printf("Longest : \"%s\"\n", longest);
}

int get_line(void) { 
//  return 0 if no line present else line length
    char c;
    int length = 0;
    // extern char line[MAX_BUFFER]; 

    while( (c = getchar()) != '\n' && c != EOF) {
        line[length++] = c;
    }
    
    line[length] = '\0';
    return length;
} 

void copy(void) {
    
    int i = 0;
    while( (longest[i] = line[i]) != '\0'){
        i++;
    }
}
 
