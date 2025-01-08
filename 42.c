#include <stdio.h>
//Let's print the sum of two numbers using function ***\n");

int sum();
int main()
{
    int v1, v2;
    printf("*** Let's print the sum of two numbers using function ***\n");
    printf("first value :");
    scanf("%d", &v1);
    printf("second value:");
    scanf("%d", &v2);
    printf("Sum : %d ", sum(v1, v2));

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}