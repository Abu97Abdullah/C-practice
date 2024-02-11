#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void)
{
    int hour, min;
    BOOL flag;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    if (hour != 12 && hour != 0)
    {
        if (hour <= 11) flag = TRUE; // AM
        else flag = FALSE; // PM
        hour = hour % 12;
    }
    else
    {
        if (hour == 12) flag = FALSE; // PM
        else flag = TRUE; // AM
        hour = 12;
    }

    printf("Equivalent 12-hour time: %d:%.2d ", hour, min);
    if (flag) printf("AM\n");
    else printf("PM\n");

    return 0;
}