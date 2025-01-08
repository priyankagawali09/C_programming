#include <stdio.h>

int main()
{ int num[10],j;
printf("***Enter the Numbers***\n");
for(int i=1;i<=5;i++){
    scanf("%d",&num[i]);
}
printf("***Following is the address of all numbers***\n");
for(int i=1;i<=5;i++){
printf("the %d numbers address is %u \n",num[i],&num[i]);
}
    return 0;
}