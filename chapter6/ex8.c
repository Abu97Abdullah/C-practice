#include <stdio.h>

int main(void)
{
    int i;
    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);
    // Should print:
    // 10 5 3 2 1 1 1 1 1 1 1........ Forever <3
    return 0;
}