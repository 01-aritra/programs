/* 15.	Display the number of days for a given month.
                 
                   E.g – User’s choice –	1. January, Output – 31,
                                            2. February – Output – 28 
                                            
                                            (Need not consider leap year)
*/


#include<stdio.h>
void main()
{
    string m[20];
   printf ("Enter year :");
   scanf ("%s",&m);
   switch (m)
   {
case 'january' :                                                            
    printf ("31");
    break;
    case 'februrary':
    printf ("28");
    break;
    case 'march':
    printf ("31");
    break;
    case 'april':
    printf ("30");
    break;
   }



}