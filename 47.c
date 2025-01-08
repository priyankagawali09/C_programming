#include <stdio.h>
int fact(int n);
int main (){
int num;
printf("*** Let's calculate factorial of number ***\n");
printf("number :");
scanf("%d",&num);
printf("Factorial is  %d ",fact(num));
return 0 ;
}
int fact(int n){
    int factorial=fact (n-1) * n;
    if(n==1){
        return 1 ;
    }
    return factorial ;
}