#include <stdio.h>
int fact(int n);
int main (){
int num;
printf("*** Let's calculate factorial of number ***\n");
printf("number :");
scanf("%d",&num);
printf("Factorial of %d is %d \n",num,fact(num));
printf("%d",fact(5));

return 0 ;
}
int fact(int n){
    // int factorial=fact (n-1) * n;
    if(n==1||n==0){
        return 1 ;
    }
    return fact (n-1) * n ;
}
