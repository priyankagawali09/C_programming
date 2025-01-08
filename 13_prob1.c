#include <stdio.h>

int main()
{ 
    int num ,result;
    printf("enter the number which ypu want to devide by 97=");
    scanf("%d",&num);
    if(num%97)
    {
      printf("the given no. %d is divisible by 97\n",num);
      result=num/97; 
      printf("their div. is=%d",result);
    }
    else{
        printf("number is not div by 97");
    }
    return 0;
}