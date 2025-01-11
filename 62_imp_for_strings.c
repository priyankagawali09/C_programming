#include <stdio.h>
#include <string.h>

int main()
{
    char *canChange = "hello world";
    puts(canChange);
    
    canChange = "This is a Tajmahal";
    puts(canChange);

    char cantChange[] = "hello world";
    puts(cantChange);
    // cantChange="Hello  World";//character array  la string set keli tr ti punha modify karata yet nahi
    // tyasathi char *str_name ="always change" krata yete
    return 0;
}