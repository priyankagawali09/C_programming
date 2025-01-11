#include <stdio.h>
#include <string.h>
void salting(char pass[]);
int main()
{
    char pass[100];
    printf("Enter your password: ");
    scanf("%s", pass);
    salting(pass);
    return 0;
}
void salting(char pass[])
{
    char salt[] = "@gmail";
    char new_pass[150];
    strcpy(new_pass, salt);
    strcat(pass, new_pass);
    puts(pass);
    //(both are same use any one of them )
    // strcpy(new_pass,pass );
    // strcat(new_pass,salt);
    // puts(new_pass);
}