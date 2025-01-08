// #include <stdio.h>
// // febonacci_series means sum of previus two elementsin the list
// // series is 0,1,1,2,3,5,8,13,21,34,55
// int F(int n)
// {
//     if(n==1||n==2) {
//         return n-1;

//     }
//     return F(n - 1) + F(n - 2);
// }
// int main()
// {
//     int num;
//     printf("give me a number ");
//     scanf("%d", &num);
//     printf("the febonacci series is \n %d", F(num));

//     return 0;
// }
#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b= 1, c;

    printf("Fibonacci Series: %d, %d", a, b);

    for (int i = 3; i <= n; ++i) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    printf("\n");
    
}

int main() {
    int n;

    printf("Give a number : ");
    scanf("%d", &n);

    if (n >= 2)
        fibonacci(n);
    else
        printf("Number of terms must be greater than or equal to 2.\n");

return 0;
}