#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = " priyanka";
    char str2[] = " gawali";
    int length = strlen(str1);
    printf("the combined string is %s \n", strcat(str2, str1));
    printf("length of given string %s is %d \n", str1, length);

    return 0;
}