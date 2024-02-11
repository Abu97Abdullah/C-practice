#include <stdio.h>

int main(void)
{
    int num, d1, d0;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("You entered the number ");
    if (num >= 11 && num <= 19)
    {
        if (num == 11) printf("eleven");
        else if (num == 12) printf("twelve");
        else if (num == 13) printf("thirteen");
        else if (num == 14) printf("fourteen");
        else if (num == 15) printf("fifteen");
        else if (num == 16) printf("sixteen");
        else if (num == 17) printf("seventeen");
        else if (num == 18) printf("eighteen");
        else if (num == 19) printf("nineteen");
        printf(".\n");
        return 0;
    }
    d1 = num / 10;
    d0 = num % 10;

    switch (d1)
    {
    case 9:
        printf("ninety-");
        break;
    case 8:
        printf("eighty-");
        break;
    case 7:
        printf("seventy-");
        break;
    case 6:
        printf("sixty-");
        break;
    case 5:
        printf("fifty-");
        break;
    case 4:
        printf("forty-");
        break;
    case 3:
        printf("thirty-");
        break;
    case 2:
        printf("twenty-");
        break;
    }
    
    switch (d0)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;
    }

    printf(".\n");
    return 0;
}