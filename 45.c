#include <stdio.h>
//function recursion
void print(int count);
int main()
{
    print(5);
    return 0;
}
void print(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("hello world\n");
    print(count - 1);
}
