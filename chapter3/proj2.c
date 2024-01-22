#include <stdio.h>

int main(void)
{
    int itemNum, year, month, day;
    float unitPrice;

    printf("Enter item number: " );
    scanf("%d", &itemNum);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%-.2d/%-.2d/%-d\n", itemNum, unitPrice, month, day, year);

    return 0;
}