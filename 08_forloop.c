#include <stdio.h>

int main()
{ 
    int count;
    printf("enter the no=");
    scanf("%d",&count);
    for (int i = 1;  i<= count; i++)
    {for ( int j = 1; j <= i; j++)
    {
        printf("hello world");
    }
            printf("\n");

    }
    
    return 0;
}