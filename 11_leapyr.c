// leap year or not 
#include <stdio.h>

int main()
{
     int year[5];
     printf("---enter the  5 year---\n ");

     for (int i = 0; i < 5; i++)
     {
          printf("year %d: ", i + 1);
          scanf("%d", &year[i]);
     }
     for (int i = 0; i < 5; i++)
     {
          int years = year[i];
          if (years % 4 == 0)
          {
               printf("\n %d is a leap year",year[i]);
          }
          else if (years % 10 != 0)
          {
               printf("\n %d is  not a leap year",year[i]);
          }
          else if (years % 400 == 0)
          {
               printf("\n %d is a leap year",year[i]);
          }
          else
          {
               printf("\n %d is  not a leap year",year[i]);
          }
     }
          return 0;
     }