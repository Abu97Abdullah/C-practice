#include <stdio.h>

int main(void)
{
    float commission, value, price, rival_comm;
    int num_of_shares;

    printf("Enter the number of shares: ");
    scanf("%d", &num_of_shares);

    printf("Enter the price of each share: ");
    scanf("%f", &price);

    value = num_of_shares * price;

    if (value < 2500.00f)
    {
        commission = 30.00f + .017f * value;
    }
    else if (value < 6250.00f)
    {
        commission = 56.00f + .0066f * value;
    }
    else if (20000.00f)
    {
        commission = 76.00f + .0034f * value;
    }
    else if (50000.00f)
    {
        commission = 100.00f + .0022f * value;
    }
    else if (value < 500000.00f)
    {
        commission = 155.00f + .0011f * value;
    }
    else
    {
        commission = 255.00f + .0009f * value;
    }
    if (commission < 39.00f)
    {
        commission = 39.00f;
    }

    // Now calculate commision charged by rival broker
    if (num_of_shares < 2000)
    {
        rival_comm = 33.00f + .03 * num_of_shares;
    }
    else
    {
        rival_comm = 33.00f + .02 * num_of_shares;
    }

    printf("Commission charged by us: $%.2f\n", commission);
    printf("Commission charged by those losers at Wall Street: $%.2f\n", rival_comm);

    return 0;
}