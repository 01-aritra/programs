// WAP to input a number and find the sum if even numbers.

#include<stdio.h>
void main()
{
    int n,sum=0;
    printf ("Enter number :");
    scanf ("%d",&n);
    for (int i=0;i<=n;i++)
    {
        if (i%2 == 0)
        {
       sum =sum+i;
    }
       /*else
       {
        continue;
       }*/
    }
     printf ("%d",sum);
}