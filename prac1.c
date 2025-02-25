#include<stdio.h>
#include<stdlib.h>

// Check whether the taken number is an armstrong number or not
void armstrong(int n)
{
    int  i,j;
    int sum = 0;
    int num =n;
    while (n>0)
    {
        j =n%10;
        sum = sum + ( j*j*j);
        n =n / 10;
    }
    if(num == sum)
    {
        printf("It is  an armstrong number");        
    }
    else
    {
        printf("It is not an armstrong number");
    }
}

int main()
{
    int n;
    printf("Enter number to check whether it is an armstrong number or not: ");
    scanf("%d",&n);

    armstrong(n);
    return 0;
}