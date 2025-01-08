#include <stdio.h>
int avg(int x,int y,int z){
    return ((x+y+z)/3);
}
int main()
{
    int a,b,c;
     printf("1st num=");
     scanf("%d",&a);
      printf("2nd num=");
     scanf("%d",&b);
      printf("3rd num=");
     scanf("%d",&c);
     printf("the avg of numbers %d,%d and%d is %d",a,b,c,avg(a,b,c));
    
    return 0;
}