#include <stdio.h>

int main(void){

    FILE *fp;
    struct whale_data{
        char whaleColor[10];
        double height;
        double weight;
    };

    fp = fopen("./txtFiles/formatted_IO.txt", "r");
    if(fp == NULL){
        printf("%s\n", "Unable to open file. ERROR FILE IO");
        return 0;
    }  
    
}