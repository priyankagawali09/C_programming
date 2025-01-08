#include <stdio.h>

int main()
{
    int i;
    int marks[] = {45, 54, 85, 76};
    // in c language for giving address of 1st element only write arr name not give it as &marks write like this (int *ptr = marks;) and    (int *ptr = marks; )this gives err
    int *ptr = marks;
    printf("*** the matrix value is ***\n");
    for ( i = 0; i <4; i++)
    {
        printf("marks are %d is %d\n", i, marks[i]);
    }
    printf("\n the memory address is :\n\n");
    for ( i = 0; i <4; i++)
    {
        printf("marks are %d is %d\n", i, &marks[i]);
    }
    printf ("\n*** the add. by another way***\n\n");
    for ( i = 0; i <4; i++)
    {
        // printf("marks are %d is %u\n", i,(void*)ptr);
                printf("marks are %d is %u\n", i,*ptr);

        ptr++;
    }
            printf("\nmarks are %u \n", ptr);

    return 0;
}