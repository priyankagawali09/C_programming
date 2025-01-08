//progrsm to calculate percentages of students in three sub.s 
#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter marks of sub. 1 -");
    scanf("%d", &marks1);
    printf("Enter marks of sub.  2 -");
    scanf("%d", &marks2);
    printf("Enter marks of sub. 3 -");
    scanf("%d", &marks3);
    printf("marks are %d,%d and %d", marks1, marks2, marks3);
    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("you are fail due to less marks\n");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf(" you got percentages=%d\n",marks1+marks2+marks3%3*100);

        printf(" you are failed due to less persentage\n");
    }
    else
    {        printf(" you got percentages=%d\n",(marks1+marks2+marks3%3*100));

        printf("congrates you are passed");
    }

    return 0;
}