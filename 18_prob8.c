
//sum of natural numbers.
#include <stdio.h>

int main()
{
    int i, sum = 0, n;
    printf("number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf(" sum of 1st %d natural number is %d", n, sum);

    return 0;
}

