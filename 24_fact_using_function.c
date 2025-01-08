#include <stdio.h>
int fact(int n){
    if (n==1||n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{ 
    int num;
    printf("enter the num =");
    scanf("%d",&num);
        printf("\nfactorial of the num %d is = %d",num ,fact(num));

    return 0;
}