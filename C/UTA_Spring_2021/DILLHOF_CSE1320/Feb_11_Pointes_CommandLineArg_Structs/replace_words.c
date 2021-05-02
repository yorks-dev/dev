#include <stdio.h>

void replce_word(char **boy, char **girl){

    printf("%s\n", *(boy + 0)); // If we give %s a memory address it works
    // Here boy holds the address of the array. and inside the array we have a 
    // bunch of addresses. boy means the address of the array. and *boy means the address
    // of the first word.(address of A). and *(boy + 1) is address of P.
    // So we have to dereference this address to get the character.

    printf("%c\n", *(*(boy + 1) + 4) );
}

int main(){

    char *boy[] = {"Ayush", "Pranshu"};
    char *girl[] = {"Lugen", "Ayushi"};

    printf("%p\n", boy);
    printf("%c\n", *boy[0]);


    replce_word(boy, girl);


    

}