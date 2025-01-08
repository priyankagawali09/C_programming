#include <stdio.h>
// arrays implementation
int main()
{
    int marks[10];
    int j=1;

    printf("***the marks of the students are***\n");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %d", &marks[i]);
    }
     for (int i = 0; i < 5; i++)
    {
        printf("%d marks are %d\n", j ,marks[i]);
        j=j+1;
    }
printf("\nprograme executed succesfully...!\n");
    return 0;
}