#include <stdio.h>
void dec_bin(int dec);
int main()
{
    int decimal = 11;
    printf("*** Decimal to Binary conversion *** \n");

    scanf("%d", &decimal);
    printf("Decimal no. %d\n", decimal);
    for (int i = 1; i <= decimal; i++)
    {     printf("%d-->",i);
          dec_bin(i);
    }
    return 0;
}
void dec_bin(int dec)
{
    int ans = 0;
    int pow = 1;
    int rem, i = 1;
    while (dec > 0)
    {
        rem = dec % 2;
        dec = dec / 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }

    printf("%d\n", ans);
}
