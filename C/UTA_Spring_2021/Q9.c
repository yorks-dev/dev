#include <stdio.h>
#include <string.h>

void bubbleSort1(char arr[], int len)
{
    char a, b, temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            a = arr[i];
            b = arr[j];

            if (a > b)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}

int main()
{
    char arr[] = "the quick brown fox jumps over the lazy dog.";
    int len = strlen(arr);

    printf("Before sort:%s\n", arr);
    bubbleSort1(arr, len);
    printf("After sort :%s\n", arr);

}
