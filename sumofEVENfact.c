// calculating the factorial of even numbers only.
//                   in case of odd number the mashine will ask to enter the even numbers only 


#include<stdio.h>
void main( )
{
    int num,fact=1,sum=0,i;
    printf ("Enter number : 'for calculating the factorial of even number'");
    scanf ("%d",&num);
    if (num%2==0)
    {
        for ( i=1;i<=num;i++)
        {
            fact = fact*i;
            sum=sum+fact;
            //{
            //printf ("factorial of %d is %d and sum of the factorial is %d",num,fact,sum);
           // }
        }
       
    }
    else
    {
       printf ("Enter an even number . For eg: 2,4,88");
       //continue;
    }
    printf ("factorial of %d is %d and sum of the factorial is %d",num,fact,sum);
    
}