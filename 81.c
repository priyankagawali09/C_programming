#include <stdio.h>
#include <stdlib.h>

int main (){
    int *ptr;
    int n;
    printf("enter the size of memory : ");
    scanf("%d",&n);
    
    ptr =(int*)calloc(n,sizeof(int));
    printf("enter the (%d) values : \n",n);
    
    for(int i=0;i<n;i++){
        printf("%d\t:",i+1);
        i=i+2;
        // scanf("%d",&ptr[i]);

    }
    // printf(" \n");
    // printf("Again enter the SOM : ");
    // scanf("%d",&n);
    // ptr=realloc(ptr, n);
    // printf("enter the (%d) values : \n",n);
    
    // for(int i=0;i<n;i++){
    //     printf("%d\t:",i+1);
    //     scanf("%d",&ptr[i]); 
    // }
    // printf(" \n");
    
    printf(" You entered values are : \n");
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
return 0 ;
}