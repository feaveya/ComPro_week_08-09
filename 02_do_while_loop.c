#include <stdio.h>

int main(void)
{
    int number;

    do
    {
        printf("Enter a number from 1 to 10: ");
        scanf("%d", &number);
    } while (number < 1 || number > 10);

    printf("You entered: %d\n", number);
    return 0;
}
