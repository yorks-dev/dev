/* 1.6 Occurance of White Space, Digits and Other Char
 * Count the number of occurrences of each digit, of white space
   characters (blank, tab, newline), and of all other characters.
*/

#include <stdio.h>

int main() {
        
/* We need 12 variables like num_0, num_1 .. num_9, then
    nwhite and nother to calculate. But its better we use array to hold
    the count of the digits.
*/
    
    char c;
    int ndigit[10] = {0};
    int nwhite, nother;
    
    nwhite = nother = 0;
    
    while( (c = getchar()) != EOF){
        
        if(c >= '0' && c <= '9')
            ++ndigit[c-'0'];   // c - '0' is integer from 0 to 9
        
        else if(c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        
        else
            ++nother;
        
    }
    
    printf("digits =");
    
    for(int i =0; i <=9; i++)
        printf(" %d", ndigit[i]);
    
    printf(", white space = %d, other = %d\n", nwhite, nother);
    
}
