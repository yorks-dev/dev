#include <stdio.h>
#include <ctype.h>
#define MAX 100

int strcmp_(char[], char[]);

// int main()
// {
//     char str1[MAX];
//     char str2[MAX];

//     fgets(str1, MAX, stdin);
//     fgets(str2, MAX, stdin);


//     int a = strcmp_(str1, str2);
//     printf("%d\n", a);
// }

int strcmp_(char str1[], char str2[])
{

    /// Check equal or Not equal
    int notequal_flag = 0;
    for (int i = 0; i < 100; i++)
    {
        if(str1[i] == '\n' && str2[i] == '\n')
            break;
        if (str1[i] != str2[i])
        {
            notequal_flag = 1;
            break;
        }
    }
    if (notequal_flag == 0)
        return 0;

    // --> means they have case difference or different
    else if (notequal_flag == 1)
    {
        // int case_eq = 0;
        for (int i = 0; i < 100; i++)
        {
            if(str1[i] == '\n' && str2[i] == '\n')
                break;

            if (tolower(str1[i]) != tolower(str2[i]))
            {
                return 2;
            }
        }
    }
    
    return 1;
}