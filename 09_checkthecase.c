// finding the character entered
// by user is lowercase or not.
#include <stdio.h>

int main()
{
    char ch[5];
    printf("enter the 5 character (without spacing) :");
    scanf("%5s",ch);
        for(int i=0;i<5;i++){
   // printf(" the char is : %c\n", ch);
   // printf(" the char  value: %d\n", ch);
    if (ch[i] >= 'a' && ch[i]<= 'z')
    {   printf(" the char is : %d\n", ch[i]);
        printf("the char '%c' is lowercase\n",ch[i]);
    }
    else
    {     printf(" the char is : %d\n", ch[i]);
          printf("the char '%c' is uppercase\n",ch[i]);
    }
        }
    return 0;
}