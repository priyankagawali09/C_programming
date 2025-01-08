#include <stdio.h>

int main()
{
    int A[2][2];
    int i,j;
    for (i =0; i < 2; i++)
    {
        for ( j =0; j < 2; j++)
        {  printf("enter the value at index %d%d : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("matrix A is :\n");
    for ( i =0; i <2; i++)
    {
        for ( j = 0 ;j <2; j++)
        { printf(" %d\t", A[i][j]);
        }
        printf("\n");
    }
      
        return 0;
    }