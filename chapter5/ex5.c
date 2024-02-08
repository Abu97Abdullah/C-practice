// The statement is legal and it print the statement because
//  n >= 1 will evaluate to 0, then the expression becomes 0 <= 10 which is true so
// it evaluates to 1 and then statements inside the if statement are to run
# include <stdio.h>

int main(void)
{
    int n = 0;
    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");
    
    return 0;

}