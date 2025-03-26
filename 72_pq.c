#include <stdio.h>
typedef struct Adderesscollection
{
    int plot_no;
    char block[100];
    char city[100];
    char state[50];
} add;
int main()
{
    add p[5];
    printf("please enter address - \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Add of person %d \n", i + 1);
        printf("plot no :");
        scanf("%d", &p[i].plot_no);
        printf("Road :");
        scanf(" %[^\n]s", p[i].block);
        printf("city :");
        scanf(" %[^\n]s", p[i].city);
        printf("state :");
        scanf(" %[^\n]s", p[i].state);
        
    }
    return 0;
}