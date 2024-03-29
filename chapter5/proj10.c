#include <stdio.h>

int main(void)
{
    int num_grade, first_digit;

    printf("Enter numerical grade: ");
    scanf("%d", &num_grade);

    if (num_grade < 0 || num_grade > 100) // Copied this part from online... It's pretty simple though.
    {
        printf("Illegal grade\n");
        return 0;
    }

    first_digit = num_grade / 10;

    printf("Letter grade: ");

    switch (first_digit)
    {
    case 10: case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    case 5: case 4: case 3: case 2: case 1: case 0:
        printf("F\n");
        break;
    }

    return 0;
}