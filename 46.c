#include <stdio.h>
int sum(int n);
int main()
{
    int num;
    printf("*** Let's calculate the sum of numbers from 1 to n ***\n");
    printf("value :");
    scanf("%d", &num);
    printf("sum of first %d natural numbers : %d", num, sum(num));

    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sum1 = sum(n - 1) + n;
    return sum1;
}