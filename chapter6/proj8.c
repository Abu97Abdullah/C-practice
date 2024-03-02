#include <stdio.h>

int main(void)
{
    int num_of_days, day_of_week;

    printf("Enter number of days in month: ");
    scanf("%d", &num_of_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day_of_week);

    for (int i = 0; i < (day_of_week - 1); i++) printf("   ");
    
    for (int i = 1; i <= num_of_days; i++)
    {
        printf("%2d", i);
        if (day_of_week == 7)
        {
            printf("\n");
            day_of_week = 1;
        }
        else
        {
            printf(" ");
            day_of_week += 1;
        }
    }
    printf("\n");
    return 0;
}