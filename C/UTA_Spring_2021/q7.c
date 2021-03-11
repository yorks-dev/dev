#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sentence[] = "As is a tale, so is life: not how long it is, but how good it is, is what matters.";
    int num = 0;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (isalnum(sentence[i]) != 0 || sentence[i] == ':')
        {
            printf("%c", sentence[i]);
            num++;
        }

        if (sentence[i] == ' ' || sentence[i] == '.')
        {
            printf(" -- %d character(s).\n", num);
            num = 0;
        }
    }

    return 0;
}
