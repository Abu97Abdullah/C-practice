#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The number %d has ", num);
    if (num < 10 && num > -10) printf("1 digit\n");
    else if (num < 100 && num > -100) printf("2 digits\n");
    else if (num < 1000 && num > -1000) printf("3 digits\n");
    else printf("4 digits\n");

    return 0;
}