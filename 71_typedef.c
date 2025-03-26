#include <stdio.h>
 typedef  struct Tataconsultancysurvices{
    char name[100];
    char post[50];
    int join_year;
}TCS;
int main (){
    TCS e1={"Prerana bhoi", "assistant engineer",2021};
    printf("employee details are - \n%s, %s, %d",e1.name, e1.post,e1.join_year);

return 0 ;
}