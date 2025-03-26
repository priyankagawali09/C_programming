#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("myfile.txt", "r");
    char ch;
    int n;

    if (fptr == NULL)
    {
        printf("file doesn't exist...!");
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {

            fscanf(fptr, "%c", &ch);
            printf("%c", ch);
          
        }
        for (int i = 0; i < 1; i++)
        {   fscanf(fptr, "%d", &n);
            printf(" %d", n);
        }
        fclose(fptr);
    }
    return 0;
}