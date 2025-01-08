// #include <stdio.h>
// long sum(int a, int b)
// {
//     printf("the sum is %d \n", a + b);
//     return a + b;
// }
// int main()
// {
//     int a=sum(2,8);

//     return 0;
// }
#include <stdio.h>
float avg(int a, int b, int c)
{
    float result = (a + b + c) / 3.0;
    return result;
}
int main()
{
    float result = avg(4, 5, 5);
    printf("The average is: %.3f\n", result); 
    

    return 0; 
}
