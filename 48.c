#include <stdio.h>
int febonacci(int n);
int main()
{
    int number;
    printf("*** Let's clculate the febonacci series ***\n");
    printf("number :");
    scanf("%d", &number);
    if (number < 1)
    {
        printf("invalid input");
        return 1;
    }

    printf(" the series is :\n");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", febonacci(i));
    }
}
int febonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return febonacci(n - 1) + febonacci(n - 2);
}