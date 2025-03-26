#include <stdio.h>
// Array of stucture
struct student
{       
    char name[50];
    int roll_no;
    char subject[50];
    int year;
    
};
int main (){
struct student s[5];
printf("***Enter the details of students***\n");
for(int i=0;i<2;i++){
    printf("%d ",i+1);
    printf("Name :");
    scanf(" %[^\n]s",s[i].name); 
    printf("Roll no :");
    scanf("%d",&s[i].roll_no);
    printf("Subject :");
    scanf(" %[^\n]",s[i].subject);
    printf("Year :");
    scanf("%d",&s[i].year);
    printf("\n");
}
printf("***Here is the basic information of students***\n");

for(int i=0;i<2;i++){
    printf("Student %d\n",i+1);
    printf("Name - %s\n",s[i].name);
    printf("Roll No. - %d\n",s[i].roll_no);
    printf("Subject - %s\n",s[i].subject);
    printf("Year - %d\n",s[i].year);
    printf("\n");

}


return 0 ;
}