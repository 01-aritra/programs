#include <stdio.h>
int main()
{
int choice , num1, num2 ,sum,subst;
printf ("~~~~~~~~~~~~~~~~~~~MAKE YOUR OWN CHOICE ~~~~~~~~~~~~~~~~~~~\n");
printf ("choice 1 : Will show sum of two numbers\n");
printf ("choice 2 : will show the difference between two numbers\n");
printf ("Enter your choice" );
scanf ("%d " , &choice);
printf ("Enter two numbers\n");
scanf ("%d %d " , &num1 ,&num2);
switch (choice) {
    case 1:
    sum = num1 + num2 ;
    printf (" %d ", sum);
    break;
    case 2:
    if (num1 > num2)
    {
        subst = num1 - num2 ;
        printf (" %d ", &subst);
        
    }
        else
        {
            printf ("Enter number 1 greater than number 2\n");
            break;
            default:
            printf ("Enter only choice 1 or 2");
            }
             return 0;
             }

        }
    