#include <stdio.h>
//function prototype write it for good programmer
void change_to_thirty_times(int* a);

void change_to_thirty_times(int* a){
    *a=*a*5;
}
int main()
{ int val;
printf("value is :");
scanf("%d",&val);
change_to_thirty_times(&val);
    printf("value of A is :%d",val);

    return 0;
}