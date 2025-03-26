#include <stdio.h>
void display(char name[10] );
int main()
{
    char name[10];
     printf("***Let's enter the name ***\n");
        scanf("%9s",name);
display(name);
    return 0;
}
void display(char name[10] ){
    printf("your name is %s",name);
}