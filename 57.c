#include <stdio.h>
void printnum(int arr[], int n);
int main()
{
    int arr[4];
    printf(" Enter the elements of matrix A :  \n");

    printnum(arr, 4);
    return 0;
}
void printnum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  index : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("*** You entered numbers are *** \n");

    for (int i = 0; i < n; i++)
    {
        printf(" %d \t ", arr[i]);
    }
}