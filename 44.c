#include <stdio.h>
#include <math.h>
//Let's calculate area of circle ,sqr,rctangle by using function
float area_sqr(float side);
float area_rectangle(float length, float height);
float area_circle(float radius);

int main()
{
    float a, b;
    printf("*** Let's calculate area of circle ,sqr,rctangle by using function***\n");
    printf("value : ");
    scanf("%f", &a);
    printf("value : ");
    scanf("%f", &b);
    printf("the area of sqr is : %.2f\n", area_sqr(a));
    printf("the area of rectangle is : %.2f\n", area_rectangle(a, b));
    printf("the area of circle is : %.2f\n", area_circle(a));
}
float area_sqr(float side)
{
    return side * side;
}
float area_rectangle(float length, float height)
{
    return length * height;
}
float area_circle(float radius)
{

    return 3.14 * radius * radius;
}
