#include <stdio.h>
// programe to calculate price of product with 18% GST
float calprice(float value);

int main()
{
    float price;
    printf("Let's calculate the price of product with 18% GST\n");
    scanf("%f", &price);
    printf("price of item is $%.2f\n", price);
    float finalprice = calprice(price);
    printf("Total Price : $%.2f\n", finalprice);
    return 0;
}
float calprice(float value)
{
    value = value + (0.18 * value);
    return value;
}