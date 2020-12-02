#include <stdio.h>
#include <string.h>
#define BUFFER_MAX 1024
#define MAX_WORDS 1024

int main() {

    char file_name[BUFFER_MAX] = {0};
    char buffer[BUFFER_MAX] = {0};

    char words[MAX_WORDS][BUFFER_MAX] = {0};
    int num_words = 0;

    printf("Enter file: ");
    fgets(file_name, BUFFER_MAX, stdin);
    if(file_name[strlen(file_name) - 1] == '\n'){
            file_name[strlen(file_name) - 1] = '\0';
        }

    FILE *fp_in = fopen(file_name, "r");
    FILE *fp_out = fopen("sorted_words.txt", "w");

    if(fp_in == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while(fgets(buffer, BUFFER_MAX, fp_in)){
        if(buffer[strlen(buffer) - 1] == '\n'){
            buffer[strlen(buffer) - 1] = '\0';
        }
        strcpy(words[num_words++], buffer);
    }

    char temp[BUFFER_MAX] = {0}; 
    for(int i = 0; i < num_words; i++) 
    { 
        strcpy(temp, words[i]); 
  
        // Insert s[j] at its correct position 
        int j = i - 1; 
        while (j >= 0 && strlen(temp) < strlen(words[j])) 
        { 
            strcpy(words[j+1], words[j]); 
            j--; 
        } 
        strcpy(words[j+1], temp); 
    } 

     for(int i = 0; i < num_words; i++) {
         fprintf(fp_out, "%s", words[i]);
         fprintf(fp_out, "%s", "\n");
     }
}