// Q:Write a program to find out the sum of the following series: x+x2+x3+….+xn (x and n will be given by user)

#include<stdio.h>
void main()
{
    int n,x,sum=0;
    printf ("Enter the value of n: ");
    scanf ("%d",&n);
    printf ("Enter the value of x: ");
    scanf ("%d",&x);
    for (int i=1;i<=n;i++)
    {
        sum=sum+(x*i);
    }
    printf ("Sum of the Series :%d",sum);
}