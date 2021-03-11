// 1.5.4 Word Counting
// Here we implement 'wc' program of UNIX in C
// print number of line, word and characters.

#include <stdio.h>

#define IN 1   // inside a word
#define OUT 2  // outside a word

int main(){
    
    char c; // int c is also the same
    int nl, nw, nc, state;
    
    nl = nw = nc = 0;
    state = OUT;
    
    while( (c = getchar()) != EOF) {

        ++nc;
        if( c == '\n') {
            ++nl;
        }
        else if( c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        }
        else if(state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}
