//  GCD of mutiple numbers

#include<stdio.h>
#include<stdlib.h>

int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;

    }
    return x;
}

int main()
{
    int x = 5;
    int y = 15;
    printf("%d",gcd(x,y)) ;
    return 0;
}