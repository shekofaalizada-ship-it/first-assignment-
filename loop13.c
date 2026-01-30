  #include <stdio.h>

int main(void)
{
    int i, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)   // check odd number
        {
            sum = sum + i;
            printf("%d\n", i);
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
