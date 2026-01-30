#include <stdio.h>

int main(void)
{
    int i, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)  // check every number from 1 to n
    {
        if (i % 2 == 0)       // only add even numbers
        {
            sum = sum + i;
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
