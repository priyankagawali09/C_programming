#include <stdio.h>
int pattern(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0){
                continue;
            }
            else{
                printf("*");
            }
        }
        printf("\n ");
    }
}
int main()
{
    int num;
    printf("enter the num =");
    scanf("%d", &num);
    printf("___the pattern is printed successfully___\n", pattern(num));

    return 0;
}