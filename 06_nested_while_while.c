#include <stdio.h>

int main(void)
{
    int row = 1;

    while (row <= 5)
    {
        int space = 1;

        while (space <= 5 - row)
        {
            printf("  ");
            space++;
        }

        int star = 1;

        while (star <= (2 * row - 1))
        {
            printf("* ");
            star++;
        }

        printf("\n");
        row++;
    }

    return 0;
}