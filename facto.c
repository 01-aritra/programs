// factorial of a number

#include<stdio.h>

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }    
    return fact;
}

int main()
{
    int n;
    //printf("Enter the value of n: ");
    //scanf("%d",&n);
    n = 6;

    printf("%d",fact(n));
    return 0;
}