#include <stdio.h>

int main(void)
{
    int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, first_sum, second_sum, check_dig;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i0, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11);

    // Rest of program is as in book.
    first_sum = i1 + i3, i5, i7, i9, i11;
    second_sum = i0 + i2 + i4 + i6 + i8 + i10;
    check_dig = 9 - ((((3 * first_sum) + second_sum) - 1) % 10);

    printf("Check digit: %d\n", check_dig);

    return 0;
}