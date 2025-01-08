#include <stdio.h>


int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}
int main()
{ int num;
printf("Give me number for addition :");
scanf("%d",&num);
printf("Sum of nth natural number : %d",sum(num));

    
    return 0;
}