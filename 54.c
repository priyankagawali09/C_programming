#include <stdio.h>

int main()
{
    float item[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the price %d: ", i + 1);
        scanf("%f", &item[i]);
    }
    printf(" \n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("The price of item %d is: $%.2f\n", i + 1, item[i]);
    }
    printf(" \n");
    
    for (int i = 0; i < 5; i++)
    {
        float  price_with_tax = item[i] + (0.18 * item[i]);
        printf("The price of item %d after 18% tax is: $%.2f\n", i+1,price_with_tax);
    }

    return 0;
}