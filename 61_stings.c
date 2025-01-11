#include <stdio.h>
//fgets(sting name ,size,stdin)
//gets(sting name)****Don't use ever it causes the problem
//string is the char array(character array)
int main (){
char first_name[50];
printf("____Enter the string____ : \n");

// scanf("%s",first_name);
printf("Your name is %s \n",first_name);
// gets(first_name);
fgets(first_name,50,stdin);
puts(first_name);

return 0 ;
}