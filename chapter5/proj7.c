#include <stdio.h>

int main(void)
{
    int i0, i1, i2, i3, larger0, larger1, smaller0, smaller1, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i0, &i1, &i2, &i3);

    if (i0 > i1)
    {
        larger0 = i0;
        smaller0 = i1;
    }
    else
    {
        larger0 = i1;
        smaller0 = i0;
    }
    if (i2 > i3)
    {
        larger1 = i2;
        smaller1 = i3;
    }
    else
    {
        larger1 = i3;
        smaller1 = i2;
    }
    
    if (larger0 > larger1) largest = larger0;
    else largest =  larger1;

    if (smaller0 < smaller1) smallest = smaller0;
    else smallest = smaller1;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;

}