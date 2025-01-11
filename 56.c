#include <stdio.h>

int main()
{
    int i ;
    int roll[5];
    int *ptr = &roll[0];
    for (i = 0 ; i < 5; i++)
    {
        printf("%d index : ", i+1);
        scanf("%d",&roll[i]);
    }
    printf("\n");
     for (i = 0; i < 5; i++)
    {
        printf("value at index %d  : %d \n", i+1,roll[i]);
    }
    return 0;
}