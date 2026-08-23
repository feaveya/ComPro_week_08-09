#include <stdio.h>

int main(void)
{
    int i;

    printf("while loop\n");
    i = 1;
    while (i <= 3)
    {
        printf("i = %d\n", i);
        i++;
    }

    printf("\ndo-while loop\n");
    i = 1;
    do
    {
        printf("i = %d\n", i);
        i++;
    } while (i <= 3);

    printf("\nfor loop\n");
    for (i = 1; i <= 3; i++)
    {
        printf("i = %d\n", i);
    }

    return 0;
}
