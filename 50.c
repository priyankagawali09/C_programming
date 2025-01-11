#include <stdio.h>

int main (){
    //* for value and & for address
int a=5;
int *ptr=&a;
int **pptr=&ptr;
printf("%d\n",**pptr);
printf("%d\n",*ptr);
printf("%d\n",a);
printf("%d\n",&a);


return 0 ;
}