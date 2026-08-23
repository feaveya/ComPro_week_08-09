#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 5)
    {
        printf("i = %d\n", i);
        i+=2;
    }

    printf("End of loop\n");
    return 0;
}
