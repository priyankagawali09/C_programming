#include <stdio.h>
void printarr(char arr[], char n);
int main()
{   printf("*** Let's print the array *** \n");

    char arr[] = {'a','b','c','d','e'};
    printarr(arr, 5);
    printf(" \n");
    prev(arr, 5);
    return 0;
}
void printarr(char arr[], char n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%u \t", arr[i]);
    }
    printf("\n");
}
void prev(char arr[], char n)
{

    for (int i = n - 1; i >= 0; --i)
    {
        printf("%u \t", arr[i]);
    }
    printf("\n");
}