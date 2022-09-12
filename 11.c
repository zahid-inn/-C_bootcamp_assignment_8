#include <stdio.h>

int main()
{
    int i, j;
    char k;

    for (i = 1; i <= 5; i++)
    {
        k = 65;

        for (j = 1; j <= 9; j++)
        {
            
            if (j >= 6 - i && j <= 4 + i)
            {
                if (j >= 6)
                    k -= 2;
                
                printf("%c", k++);
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}