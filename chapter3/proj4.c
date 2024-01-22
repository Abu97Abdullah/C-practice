#include <stdio.h>

int main(void)
{
    int areaCode, centralOfficeCode, lineCode;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &areaCode, &centralOfficeCode, &lineCode);

    printf("You entered %3.3d.%3.3d.%4.4d\n", areaCode, centralOfficeCode, lineCode);

    return 0;
}