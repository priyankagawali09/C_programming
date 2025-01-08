#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("---enter the values---\n");
    printf("value a:");
    scanf("%d", &a);
    printf("value b:");
    scanf("%d", &b);
    printf("value c:");
    scanf("%d", &c);
    printf("value d :");
    scanf("%d", &d);
    if(a>b && a>c && a>d){
     printf(" A is greater :%d",a);

    }else if(b>a && b>c && b>d){
     printf(" B is greater :%d",b);

    }else if(c>a && c>b && c>d){
     printf(" C is greater :%d",c);

    }else if(d>a && d>b && d>c){
     printf(" D is greater :%d",d);

    }

    return 0;
}