#include <stdio.h>

int main(void)
{
    int d0, d1, d2;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d2, &d1, &d0);

    printf("The reversal is: %d%d%d\n", d0, d1, d2);

    return 0;
}