#include <stdio.h>

int main(void)
{
    int num, num_copy, flipped = 0, i = 1;

    printf("Enter a number: ");
    scanf("%d",&num);

    num_copy = num;

    while (num_copy % i != num) i*= 10;
    i /= 10;

    do
    {
        flipped += (num % 10) * i;
        num /= 10;
        i /= 10;
    } while (num > 0);

    printf("Your number reversed: %d\n", flipped);

    return 0;

}