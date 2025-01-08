#include <stdio.h>

float convert(float c)
{
    return (c * (9.0 / 5.0)) + 32;
}
int main()
{
    float temp;
    printf("Temperature in celcius :");
    scanf("%f", &temp);
    printf("Temperature in fahrenheit is %.2f", convert(temp));

    return 0;
}