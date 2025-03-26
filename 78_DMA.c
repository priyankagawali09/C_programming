#include <stdio.h>
#include <stdlib.h>

int main (){
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        printf("%d : ",i+1);
        scanf("%d",&ptr[i]);
    }
printf(" \n");
printf("values are ___ \n");

for(int i=0;i<5;i++){
        printf("%d\t",ptr[i]);
    }
return 0 ;
}