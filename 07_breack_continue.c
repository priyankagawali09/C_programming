#include <stdio.h>

int main()
{   // use any one at one time .
    for (int i = 1; i < 20; i++)
    { /*if(i==5){
        break;//exit the loop now!
    }*/ 
     if( i%5==0){
        continue;//current statement don't print.
    }
        printf("i is %d \n",i);
    }
     printf("for loop done...!");

    return 0;
}