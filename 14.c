#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1 || j == i) || (j >= 1 && i == 5))
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}