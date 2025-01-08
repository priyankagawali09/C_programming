#include <stdio.h>

int main()
{
    int a = 72, i = 1;
    int *b = &a; // a cha address *b la asign hoto an and *b print kela tr a chi  real value print hoil an *(&b) print kela tr punha a cha  memory address print hoil.

    printf("%d The Given Number is : %d\n", i, a);
    printf("%d The Given Number is : %d\n", ++i, &a);
    printf("%d The Given Number is : %p\n", ++i, a);
    printf("%d The Given Number is : %p\n", ++i, &a);
    printf("%d The Given Number is : %u\n", ++i, a);
    printf("%d The Given Number is : %u\n", ++i, &a);
    printf("The  value at add is : %d\n", *(b));
    printf("The  value at add is : %d\n", *(&b));
    printf("The  value at add is : %d\n", *(&a));
    int x = 9;
    int *y = &x;
    printf("\n");
    printf("The  value at add is : %d\n", *(y));
    printf("The  value at add is : %d\n", *(&y));
    printf("The  value at add is : %d\n", *(&x));

    return 0;
}