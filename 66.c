#include <stdio.h>

int main()
{   
    int table[3][10];
    int n1,n2,n3;
    printf("values for printing table :  \n");
    scanf("%d\t%d\t%d",&n1,&n2,&n3);
    
    int mul_tbl[] = {n1,n2,n3};
    printf("*** Let's print the table *** \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = mul_tbl[i] * (j + 1);
        }
    }
    printf(" \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d * %d = %d\n", mul_tbl[i], j + 1, table[i][j]);
        }
        printf(" \n");
    }
    return 0;
}