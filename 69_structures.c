#include <stdio.h>
#include <string.h>
// stucture
struct student
{
    char name[50];
    int roll_no;
    char subject[50];
    int year;
};
int main()
{
    struct student s1;
    strcpy(s1.name, "shradha");
    s1.roll_no = 02;
    strcpy(s1.subject, "cs");
    s1.year = 2024;
    printf("name : %s \n", s1.name);
    printf("Roll no : %d \n", s1.roll_no);
    printf("subject: %s \n", s1.subject);
    printf("year : %d \n", s1.year);
    struct student s2 = {"priya", 30, "computer science", 2024};
    printf("name : %s \n", s2.name);
    printf("Roll no : %d \n", s2.roll_no);
    printf("subject: %s \n", s2.subject);
    printf("year : %d \n", s2.year);
    struct student *ptr=&s1;
    // this is the method using python
    printf("s1 student details are -  %d \n",(*ptr).roll_no);
    printf("s1 student details are -  %d \n",ptr->year);

}