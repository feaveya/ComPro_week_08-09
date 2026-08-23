#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }

        printf("i = %d\n", i);
    }

    printf("Loop stopped\n");
    return 0;
}
