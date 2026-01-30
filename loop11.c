#include <stdio.h>

int main()
{
    int i, n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            count = count + 1;
            printf("%d\n", i);
        }
    }

     printf("Count = %d\n", count);

    return 0;
}
