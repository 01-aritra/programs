/* Factorial of n! */

#include<stdio.h>
void main()
{
    int n;
    printf ("Enter the value of n : ");
    scanf("%d",&n);
    int fact =1;
    int sum =0;
    for (int i=1;i<=n;i++)
    {
        fact = fact *i;
        sum = sum + fact;
    }
    
    printf ("Factorial of n : %d\n",fact);
    printf("%d", sum);
}

