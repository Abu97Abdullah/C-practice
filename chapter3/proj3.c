#include <stdio.h>

int main(void)
{
    int GS1prefix, groupID, publisherCode, itemNum, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1prefix, &groupID, &publisherCode, &itemNum, &checkDigit);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher Code: %d\nItem number: %d\nCheck digit: %d\n", GS1prefix, groupID, publisherCode, itemNum, checkDigit);

    return 0;
}