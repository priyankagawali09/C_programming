#include <stdio.h>
int matrixA(int a[][2], int row, int clm);
int matrixB(int b[][2], int row, int clm);
int matrixsum(int a[][2], int b[][2], int sum[][2], int row, int clm);
int main()
{
    int A[2][2], B[2][2], sum[2][2];
    matrixA(A, 2, 2);
    matrixB(B, 2, 2);
    matrixsum(A, B, sum, 2, 2);
    return 0;
}
int matrixA(int a[][2], int row, int clm)
{
    int i, j;
    printf("Enter Elements for matrix A : \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < clm; j++)
        {
            printf("at index %d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("*** You have entered matrix A is: *** \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < clm; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
int matrixB(int b[][2], int row, int clm)
{
    int i, j;
    printf("Enter Elements for matrix B : \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < clm; j++)
        {
            printf("at index %d%d : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("*** You have entered matrix B is : *** \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < clm; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}

int matrixsum(int a[][2], int b[][2], int sum[][2], int row, int clm)
{
    int i, j;
    // printf("A = \n");

    // for (i = 0; i < row; i++)
    // {
    //     for (j = 0; j < clm; j++)
    //     {
    //         printf("%d\t", a[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("B = \n");

    // for (i = 0; i < row; i++)
    // {
    //     for (j = 0; j < clm; j++)
    //     {
    //         printf("%d\t", b[i][j]);
    //     }
    //     printf("\n");
    // }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < clm; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("*** Sum of Matrix A and B ***\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < clm; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}