#include <stdio.h>
#include <string.h>

int main()
{
    int out, num = 0;
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int target[5] = {10, 20, 40, 100, 570};

    for (int a = 0; a < 5; a++)
    {
        printf("Pairs with the product = %d:\n", target[a]);
        for (int b = 0; b < 20; b++)
        {
            for (int c = b; c < 20; c++)
            {
                out = arr[b] * arr[c];
                if (target[a] == out)
                {
                    printf("(%d,%d) ", arr[b], arr[c]);
                    num++;
                }
            }
        }
        if (num == 0)
            printf("No pair found");

        printf("\n\n");
        num = 0;
    }
    return 0;
}
