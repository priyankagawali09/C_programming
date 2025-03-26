#include <stdio.h>
//  structure using function
struct myinfo{
      char name[50];
      int age;
      char DOB [20];
};
void getinfo(struct myinfo m1);
int main (){
    struct myinfo m1={"priyanka",18,"6 sept 2005"};
    getinfo(m1);
    

return 0 ;
}
void getinfo(struct myinfo m1){
    printf("My Personal Details are -\n");
    printf("name :%s\n",m1.name);
    printf("age :%d\n",m1.age);
    printf("DOB :%s\n",m1.DOB);



}
