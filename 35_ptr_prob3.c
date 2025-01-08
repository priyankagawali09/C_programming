#include <stdio.h>
void sum(int a, int b)
{
    int s = a + b;
    printf("the sum is %d ", s);
}
void avg(float a, float b)
{
    float avg = (a + b )/ 2.0;
    printf("\nthe average is %f ", avg);
}
int main()
{
    int x = 4, y = 6;
    sum(x, y);
    avg(x, y);

    return 0;
}