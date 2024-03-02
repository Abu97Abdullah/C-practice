#include <stdio.h>

int main(void)
{
    int n, j, denom;
    float e = 1.0f;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (j = 1, denom = 1; j <= i; j++) denom *= j;
        e += 1.0 / denom;
    }

    printf("e is approximated to: %f\n", e);

    return 0;
}