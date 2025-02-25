//  Check whether the enetered no. is prime or not

#include<stdio.h>
#include<stdlib.h>

int prime(int n)
{
    int flag = 0;
    if (n == 0)
    {
        printf("Enter no. is 0");
      //  break;
      return 0;
    }
    if (n == 1)
    {
        printf("Enter no. is 1 :  Enter no. above 1 to check wheteher it is Prime or not. :");
       // break;
       return 0;
    }
    for (int i = 2;i*i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("Entered no. is not a prime no.");
            flag = 1;
        }
    }
    if (flag  == 0)
    {
        printf("It is a prime no.");
    }
}

int main()
{
    int n ;
    // n=5;
    printf("Enter no. to check wheteher it is a prime no. : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}