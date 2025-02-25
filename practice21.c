#include<stdio.h>
void main()
{
    int n,temp,i,k=0;
    printf ("Enter number to check whether it is an armstrong number or not.");
    scanf ("%d",&n);
    temp=n;
    while (n>0)
    {
        i=n%10;
        k=k+(i*i*i);
        n=n/10;
    }
    if (temp==k)
    {
        printf ("Armstrong number");
    }
    else
    {
        printf ("Not an Armstrong number.");
    }}

