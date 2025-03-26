#include <stdio.h>
void bin_dec(int bin);
int main()
{
    int binary = 11;
    printf("*** Binary to Decimal conversion *** \n");

    scanf("%d", &binary);
    printf("binary no. %d\n", binary);
    bin_dec(binary);

    return 0;
}
void bin_dec(int bin)
{
    int ans = 0;
    int pow = 1;
    int rem, i = 1;
    while (bin > 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        ans = ans + (rem * pow);
        pow = pow * 2;
    }

    printf(" decimal : %d", ans);
}
