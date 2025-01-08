#include <stdio.h>

int main()
{
    int i = 56;
    int *prt = &i;
    printf("i is %d\n", &i);
    printf("i is %d\n", i);
    printf("i is %d\n", *(prt));
    printf("i is %d\n", *(&i));

    return 0;
}