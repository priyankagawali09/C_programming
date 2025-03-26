#include <stdio.h>
#include <stdlib.h>

int main (){
    float *ptr;
    int n;
    printf("enter the size : ");
    scanf("%d",&n);
    
    ptr=(float *)malloc(n*sizeof(float));
        // ptr=(float *)calloc(5 ,sizeof(float));

    for(int i=0;i<n;i++){
        printf("%d : ",i+1);
        scanf("%f",&ptr[i]);
    }
printf(" \n");
printf("values are ___ \n");

for(int i=0;i<n;i++){
        printf("%.2f\t",ptr[i]);
    }
return 0 ;
}