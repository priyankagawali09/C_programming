#include <stdio.h>
// function call by value

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("\nthe nmbers after swapping are  %d and %d  ", a, b);
    return 0;
}