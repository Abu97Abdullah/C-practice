#include <stdio.h>

int main(void)
{
    int i0j0, i0j1, i0j2, i0j3;
    int i1j0, i1j1, i1j2, i1j3;
    int i2j0, i2j1, i2j2, i2j3;
    int i3j0, i3j1, i3j2, i3j3;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &i0j0, &i0j1, &i0j2, &i0j3, &i1j0, &i1j1, &i1j2, &i1j3, &i2j0, &i2j1, &i2j2, &i2j3, &i3j0, &i3j1, &i3j2, &i3j3);

    printf("Row sums: %d %d %d %d\n", i0j0 + i0j1 + i0j2 + i0j3, i1j0 + i1j1 + i1j2 + i1j3, i2j0 + i2j1 + i2j2 + i2j3, i3j0 + i3j1 + i3j2 + i3j3);
    printf("Column sums: %d %d %d %d\n", i0j0 + i1j0 + i2j0 + i3j0, i0j1 + i1j1 + i2j1 + i3j1, i0j2 + i1j2 + i2j2 + i3j2, i0j3 + i1j3 + i2j3 + i3j3);
    printf("Diagonal sums: %d %d\n", i0j0 + i1j1 + i2j2 + i3j3, i0j3 + i1j2 + i2j1 + i3j0);

    return 0;
}