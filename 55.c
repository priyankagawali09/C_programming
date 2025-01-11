#include <stdio.h>
// *ptr for printing the value of the pointer and & is for printing address like *ptr gives us original value and &ptr gives us the address of the pointer
int main (){
int age =23;
int _age =34;
int *ptr = &age;
int *_ptr = &_age;
printf("difference : %d  \n",ptr-_ptr);
_ptr=&age;
printf("comparison : %d \n",ptr ==_ptr);




return 0 ;
}