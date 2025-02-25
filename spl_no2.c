// Write a no. to check whether the entered no. is a spetial no. or not

#include<stdio.h>
#include<stdlib.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

void spl(int n)
{
    int temp;
    int sum = 0;
    int num = n;
    while (n > 0)
    {
        temp = n % 10;
        sum = sum + factorial(temp);
        n = n / 10;
    }
    if (num == sum)
    {
        printf("It is a spetial no.");
    }
    else
    {
        printf("It is not a Spetial no.");
    } 
}

int main()
{
    int n = 145;
    spl(n);;
    return 0;
}
