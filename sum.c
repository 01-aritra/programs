/* WAP to print the sum of n natural numbers */



#include<stdio.h>
int main()
{
    int i,n,sum=0,sumE=0,sumO=0;
    printf("Enter numer upto which it will be printed"); 
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum = sum +i;
        if (i%2==0)   //separating even and odd : even
        {
            sumE=sumE+i;
        }
        else // otherwise condition : odd
        {
            sumO=sumO+i;

        }
    }
    printf ("Sum = %d \n",sum);
    printf ("Sum of even : %d \n",sumE);
    printf ("Sum of odd : %d \n",sumO);
}