#include <stdio.h>

int main() {
    
    int input;
    
    scanf("%d", &input);
    printf("%d\n", input);
    
    char c = getchar();    // takes the next input char
    c = getchar();  
    putchar(c);
    
    return 0;
}

/** NOTE
 * Here the scanf starts the input buffer and then when we enter the integer say 11 and hit [CARRIAGE RETURN] i.e. '\n' is added the the buffer and it ends.
 * So after line 7 the buffer is --> "11\n"
 * So when printf looks for %d it prints till 11
 * and then buffer is left with "\n" and getchar() reads 1 char from it, and gets                   the \n and stored it in c and thus we see no output.
 * Instead we can enter 11A as the input and we will get output
 * 11
 * A
 * Also anotherr fix is to add one more getchar() there after the last scanf.
 * https://cboard.cprogramming.com/c-programming/176380-why-function-getchar-skipped-does-not-run-above-program-c.html

ORiGINAL BUGGY CODE
 
#include <stdio.h>

int main() {
    
    int input;
    
    scanf("%d", &input);
    printf("%d\n", input);
    
    char c = getchar();    // takes the next input char
    putchar(c);
    
}

**/
