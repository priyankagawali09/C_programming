#include <stdio.h>
void printarr(int a[], int n);
int main()
{
    int a[5];
    printarr(a, 5);

    return 0;
}
void printarr(int a[], int n)
{
    printf("Give me values of array : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d) : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf(" \n");
    printf("The given array is : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n / 2; i++)
    {
        int first_val = a[i];
        int sec_val = a[n - i - 1];
        a[i] = sec_val;
        a[n - i - 1] = first_val;
    }
    printf("Array after reversing : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}