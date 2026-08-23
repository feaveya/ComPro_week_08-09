#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("i = %d, j = %d\n", i, j);
        }
    }

    return 0;
}
