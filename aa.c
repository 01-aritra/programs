// calculating the factorial of a number

#include<stdio.h>
void main()
{
    int n,i,fact=1,sum=0;
    printf ("Enter number to calculate it's factorial :");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
        fact=1;
    }
    printf ("Sum of factorial is %d",sum);
}

