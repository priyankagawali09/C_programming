//program to calculate income tax.
#include <stdio.h>

int main()
{
    int income ,tax=0;
    printf("Enter your income\n");
    scanf("%d", &income);
    printf("your income is %d .\n", income);
    if (income <= 250000)
    { printf(" Your  income is too small...!\n");
        tax = 0;
    }
    else if (income > 250000 && income < 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income < 750000){
        tax=0.05 * (500000-250000)+0.2*(income= 500000);
    }
    else
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (500000 -750000) + 0.3 * (income -750000);
    }
 printf("The total amount you need to pay %d",tax);
    return 0;
}