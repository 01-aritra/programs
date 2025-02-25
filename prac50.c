//Factorial of a number

#include<stdio.h>
#include<stdlib.h>

void factorial(int n)
{
    int fact = 1;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum += fact;
    }
    printf("%d\n",fact);
    printf("%d",sum);
}

int main()
{
    int n = 5;
    factorial(n);
    return 0;
}