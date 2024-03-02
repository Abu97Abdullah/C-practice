#include <stdio.h>

int main(void)
{
    int i, j, denom;
    float epsilon, e = 1.0f, term = 1.0f;

    printf("Enter the value of Ɛ: ");
    scanf("%f", &epsilon);

    i = 1;
    do
    {
        term /= i;
        if (term < epsilon) break;
        else e += term;
        i += 1;
    } while (1);

    printf("e is approximated to: %f\n", e);

    return 0;
}