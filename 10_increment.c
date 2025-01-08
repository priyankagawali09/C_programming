#include <stdio.h>

int main()
{
    int i = 5;
    printf("value of i= %d \n", i);
    i = i + 5;
    printf("value of i= %d \n", i);
    i++;
    printf("value of i= %d \n", i);
    printf("value of i= %d \n", --i);
    printf("value of i= %d \n", i);
    printf("value of i= %d \n", i--);
    printf("value of i= %d \n", i);
    printf("value of i= %d \n", ++i);
    printf("value of i= %d \n", i);
    printf("value of i= %d \n", i++);
    printf("value of i= %d \n", i);
    printf("value of i= %d \n", i += 4);

    return 0;
}