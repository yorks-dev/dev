#include <stdio.h>

int my_strlen(char *str){
    int len = 0;    
    char *ch_ptr = str;

    while(*ch_ptr != '\0'){
        len++;
        ch_ptr++;
    }

    return len;
}

int main(){
    char str[10] = {0};
    printf("Enter String\n");
    scanf("%s", str);

    printf("%d\n", my_strlen(str));
}
