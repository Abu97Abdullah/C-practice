#include <stdio.h>

int main(void)
{
    int m0, m1, d0, d1, y0, y1;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m0, &d0, &y0);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    if (y0 < y1) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m0, d0, y0, m1, d1, y1);
    else if (y1 < y0) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m0, d0, y0);
    else
    {
        if (m0 < m1) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m0, d0, y0, m1, d1, y1);
        else if (m1 < m0) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m0, d0, y0);
        else
        {
            if (d0 < d1) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m0, d0, y0, m1, d1, y1);
            else if (d1 < d0) printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m0, d0, y0);
            else printf("The two dates are the same!\n");
        }
    }
    return 0;
}