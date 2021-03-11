// Run with words.txt

#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
#define WORD_MAX 1024

int count_words(FILE *fp_in, char *word)
{
    char string[BUFFER_SIZE];
    char *position;
    int index, count = 0;

    while (fgets(string, BUFFER_SIZE, fp_in))
    {
        index = 0;
        while ((position = strcasestr(string + index, word)) != NULL)
        {
            index = (position - string) + 1;
            count++;
        }
    }
    return count;
}


int main()
{
    char file[BUFFER_SIZE] = {0};
    char word[WORD_MAX] = {0};
    int word_count = 0;

    printf("Enter file: ");
    scanf("%s", file);
    printf("Search word: ");
    scanf("%s", word);

    FILE *fp_in = fopen(file, "r");
    if (fp_in == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    word_count = count_words(fp_in, word);
    printf("Found %d occurrences!\n", word_count);
    fclose(fp_in);
}

