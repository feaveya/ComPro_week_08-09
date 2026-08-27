#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 3; i++)
    {
        int j = 1;

        while (j <= 2)
        {
            printf("i = %d, j = %d\n", i, j);
            j++;
        }
    }

    return 0;
}
