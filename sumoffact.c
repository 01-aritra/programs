/* WAP to enter a number a calculate it's sum of factorial.
    For Eg-65 = 6!+5!*/

#include <stdio.h>

void main()
{
    int n,i,sum=0,fact=1;
    printf ("Enter number to calculate it's sum of factorial\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        
       
        fact=fact*i;
        sum=sum+fact;
        
    }
    printf ("The sum of factorial of %d is : %d and it's factorial is %d",n,sum,fact);
   
}   
