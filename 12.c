#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 4; i++)
    {
        k = 65;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5)
                k -= 2;

            j >= i &&j <= 8 - i ? printf("%c", k++) : printf(" ");
        }
        printf("\n");
    }

    return 0;
}