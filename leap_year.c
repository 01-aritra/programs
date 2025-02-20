/*Program to check whether a year is Leap year or not. 
*/


#include<stdio.h>
void main()
{
    int year;
    printf ("Enter year :  ");
    scanf ("%d",&year);
    
    
        if (year%400==0|| year%4==0 && year%100 == 0 )
        {
            printf ("Leap year ");
        }
        else 
        {
            printf ("Not a leap year");
        }
}