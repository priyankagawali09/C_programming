#include <stdio.h>
void dowork(int a, int b, int *sum, int *prod, int *avg);
int main()
{
    int a, b;
    int sum, prod, avg;
    printf("*** Let's calculate the sum product and avg of two numbers using call by value and call by reference *** \n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("a= %d ,b= %d \n", a, b);

    dowork(a, b, &sum, &prod, &avg);

    return 0;
}

void dowork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = a + b / 2;
    printf("sum : %d \n", *sum);
    printf("product : %d \n", *prod);
    printf("Average :%d \n", *avg);
}