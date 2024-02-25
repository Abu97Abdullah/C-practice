#include <stdio.h>

int main(void)
{
    int m_init, n_init, m, n, gcd, remainder;

    printf("Enter a fraction: " );
    scanf("%d /%d", &m_init, &n_init);
    m = m_init;
    n = n_init;

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    gcd = m;
    printf("In lowest terms: %d/%d\n", m_init / gcd, n_init / gcd);

    return 0;
}