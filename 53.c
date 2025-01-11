#include <stdio.h>
void findmax(int a, int b);
void _findmax(int *a, int *b ,int  *max);

int main()
{
    int x, y ,max;

    printf("*** Let's find the max of two numbers *** \n");
    printf("Please enter the number... \n");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("x = %d ,y = %d \n", x, y);
    findmax(x, y);
    _findmax(&x, &y, &max);
    printf("maximum fron %d and %d is %d \n", x, y, max);
    

    return 0;
}
void findmax(int a, int b)
{
    if (a > b)
    {
        printf("%d is greater  \n", a);
    }
    else
    {
        printf("%d is greater  \n", b);
    }
}
void _findmax(int *a, int *b ,int  *max){
    *max =(*a>*b) ? *a:*b ;
    printf("maximum number fron %d and %d is %d \n", *a,*b, *max);
}