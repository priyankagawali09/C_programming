#include <stdio.h>
struct vector{
    int x;
    int y;
};
void cal_sum(struct vector v1,struct vector v2, struct vector sum);
int main (){
 struct vector v1= {5,11};
 struct vector v2= {3,10};
 struct vector sum={0};
 cal_sum(v1,v2,sum);
return 0 ;
}
void cal_sum(struct vector v1,struct vector v2, struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("sum of x : %d \n",sum.x);
    printf("sum of y : %d \n",sum.y);
}