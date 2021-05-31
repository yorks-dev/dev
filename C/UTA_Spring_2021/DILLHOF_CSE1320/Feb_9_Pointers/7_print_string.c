#include <stdio.h>

void print_str(const char* str){ // Accept the address of the first character
    while(*str != 0)
        printf("%c", *str++);
}

int main() {
    char str[] = "You were right about that thing on Ganymede, Ma\'am.\n";
    print_str(str);
    return 0;
}