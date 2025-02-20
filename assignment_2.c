// Q: Write a program to calculate the sum of even digits of a number. (ip:123456;op: 12 (2+4+6))

#include <stdio.h>
void main()
{
    int n,i,sum=0; 
    printf ("Enter number : ");
    scanf ("%d",&n);
    
    while (n>0)
    {
        i=n%10;
    if (i%2 == 0)
    {
        sum = sum +i;
    }
    /*else
    {
        continue;
    }
   */
    n=n/10;
     }
      printf ("%d",sum);
}


