/* WAP to check whether the entered number is prime or not.

            If prime the find it's factors.    */



#include<stdio.h>
void main()
{
    int num,i,j,c=0,fact=1;
    // int sum=0;
    printf ("Enter number : ");  // taking the number as input.
    scanf ("%d",&num);
    for (i=1;i<=num;i++)   // for loop variable to check whether the number is prime or not
    {
        if (num%i==0)    // reminder checking
        c++;            // incrementing variable
    }
    if (c==2)
    {
        for (j=1;j<=num;j++)            // for loop variable
        {
            fact =fact *j;    //calculating factorial.
            //sum=sum +fact;
        }
        printf ("The number %d is a prime number.\n",num);
        printf ("factors of the number %d is %d",num,fact);
        // printf ("sum of factors of %d is %d",num,sum);
    }
    else
    {
        printf ("enter a prime number.");  //else condition.
    }
}