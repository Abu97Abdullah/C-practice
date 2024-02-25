#include <stdio.h>

int main(void)
{
    float largest, input_num;
    largest = 0.0;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%f", &input_num);
        if (input_num > largest) largest = input_num;
        if (input_num <= 0) break;
    }
    printf("\nThe largest number entered was %.2f\n", largest);

    return 0;
}