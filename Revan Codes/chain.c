#include <stdio.h>
#define MAX_BUFFER 100

int main() {
    
    printf("> ");
    int ch = getchar();
    int len = 1, max = 0;
    do
    {
        int temp = ch;
        int flag = 0;  /// for wait
        ch = getchar();

        if(flag == 1)
            continue;

        if(ch == temp + 1){
            len ++;
        }
        else{
            // stop and wait for either ' ' or '\n'
            flag = 1;
            if(ch != ' ' && ch != '\n')
                len = 1;
        }

        if(ch == ' ' || ch == '\n'){
            flag = 0;
            if(len > max){
                max = len;
            }
            len = 1;
            
            if(ch == '\n')
                break;
        }
        
    }while (1);

    printf("Longest chain: %d\n", max);

}