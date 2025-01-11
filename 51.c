#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 5, y = 9;
    printf(" *** Before swapping values are *** \n");
    printf("Value of x = %d\n", x);
    printf("Value of y = %d\n", y);
    printf(" *** After swapping values are *** \n");
    // swap(x, y);
    // printf(" x= %d ,y = %d \n",x,y);

    printf("vales by reference \n");
    
    _swap(&x,&y);
    printf(" x= %d ,y = %d \n",x,y);
    

    return 0;
}
// void swap(int a, int b)
// {
//     int c;
//     c = a;
//     a = b;
//     b = c;
//     printf(" 1st value : %d\n", a);
//     printf(" 2nd value : %d\n", b);
// }
void _swap(int *a, int *b){
    
    int c;
    c = *a;
    *a = *b;
    *b = c;
       printf(" 1st value : %d\n", *a);
    printf(" 2nd value : %d\n", *b);
  
}