#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 20; i++)
    {
        if (i > 10 && i <=20)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
//print the num is div by 2,5,7,9. from 1st 50 numbers.
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf(" is %d div by 2\n", i);
        }
        else if (i % 5==0)
        {
            printf(" is %d div by 5\n", i);
        }
        else if (i % 7==0)
        {
            printf(" is %d div by 7\n", i);
        }
        else if (i % 9==0)
        {
            printf(" is %d div by 9\n", i);
        }
    }
    return 0;
}