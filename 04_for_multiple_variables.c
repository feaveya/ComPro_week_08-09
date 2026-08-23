#include <stdio.h>

int main(void)
{
    for (int i = 1, j = 10; i <= 5; i++, j--)
    {
        printf("i = %d, j = %d\n", i, j);
    }

    printf("End of loop\n");
    return 0;
}
