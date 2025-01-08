#include <stdio.h>

int main()
{
    int age;
    printf("ENTER YOUR AGE =");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("your age is %d congrates... you are edigible for voting", age);
    }
    else
    {
        printf("oops...you are not edigible for voting(your age is less than 18)");
    }
    return 0;
}