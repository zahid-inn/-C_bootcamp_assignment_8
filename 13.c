#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 7; i++)
    {
        k = 65;
        for (j = 1; j <= 13; j++)
        {
            if (j >= 8)
                k -= 2;

            if (j <= 8 - i || j >= i + 6)
                printf("%c", k);

            else
                printf(" ");

            k++;
        }
        printf("\n");
    }

    return 0;
}