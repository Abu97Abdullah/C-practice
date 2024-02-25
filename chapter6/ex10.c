#include <stdio.h>

int main(void) {
    int i;

    i = 10;
    while (i > 0)
    {
        printf("%d ", --i);
        if (i % 2 == 0)
        {
            printf(" Even\n");
            continue;
        }
        printf(" Odd\n");
    }
    
    printf("\n");
    i = 10;
    while (i > 0)
    {
        printf("%d ", --i);
        if (i % 2 == 0)
        {
            printf(" Even\n");
            goto first_goto;
        }
        printf(" Odd\n");
        first_goto: ;
    }
    return 0;
}