// Prime no.

#include<stdio.h>
#include<stdlib.h>

int check_prime_no(int n)
{
    if ( n == 0)
    {
        printf("Enter no. is 0");
        return 0;
    }
    if (n == 1)
    {
        printf("Entered no is 1");
        return 0;
    }
    
    int i;
    int count = 0;
    for (i = 2;i <= n; i++)
    {
        if (n % i == 0)
        count ++;
    }
    if ( count > 2)
    {
        printf("It is not prime");
    }
    else
    {
        printf("It is a prime no.");
    }
    return 0;
}

int main()
{
    int n ;

    printf("Enter a no: ");
    scanf("%d",&n);
    check_prime_no(n);
    return 0;
}