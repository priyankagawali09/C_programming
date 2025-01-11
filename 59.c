#include <stdio.h>
int countodd(int arr[], int n);
int main()
{
    int num, a[4];
    printf("enter the elemens :\n");
    countodd(a, 4);
    return 0;
}
int countodd(int arr[], int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d is even \n", arr[i]);
        }
        else
        {
            printf("%d is odd \n", arr[i]);
        }
    }
}