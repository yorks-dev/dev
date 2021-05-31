#include "creature.h"

int main(){
    
    struct creature dragon = {
        "Thorax"
    };

    // Read from user

    fgets(dragon.name, MAX_NAME, stdin);
    remove_newline(dragon.name);
    

    return 0;
}

void remove_newline(char *str){
    int length = strlen(str);
    str[length - 1] = '\0';
}