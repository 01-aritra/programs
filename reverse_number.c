// Reversing a number in c

#include<stdio.h>
#include<stdlib.h>

void reverse_(int x)
{
    int temp , revno = 0;
    while (x != 0)
    {
        temp = x % 10;
        revno = revno * 10 + temp;
        x = x / 10;
    }
    printf("Reverse no. : %d",revno);    
}

int main()
{
    int x = 98765;
    reverse_(x);
    return 0;
}