#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 13; i++)
    {
        if (i <= 4)
        {
            for (j = 1; j <= 19; j++)
            {
                if ((j >= 4 - i && j <= i + 6) || (j >= 14 - i && j <= i + 16))
                {
                    printf("*");

                    if (i == 4 && j == 6)
                    {
                        printf("MYSIRG");
                        j = 12;
                    }
                }
                else
                    printf(" ");
            }
        }

        else
        {
            for (j = 1; j <= 19; j++)
            {
                if (j >= i - 3 && j <= 23 - i)
                    printf("*");

                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}