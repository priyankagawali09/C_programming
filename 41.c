#include <stdio.h>
#include <string.h>
// to check the pincode is valid or not for india
void french();
void indian();
int main()
{
    char pin[10];
    int length, isvalid = 1;

    printf("Enter Your Pin : ");
    scanf("%s", pin);
    length = strlen(pin);
    if (isvalid && length == 6)
    {
        indian();
    }
    else if (isvalid && length == 4)
    {
        french();
    }
    else
    {
        printf("Invalid Pin...!");
    }
    return 0;
}
void french()
{
    printf("Bonjour...!");
}
void indian()
{
    printf("Namaste...!\nWelcome in india");
}