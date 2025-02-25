/*Write a C program that accepts a positive integer n and prints the first n prime numbers.

For example, if n is 5, the program should output "2 3 5 7 11".

How would you approach this problem?*/




#include<stdio.h>

void main()
{
    int n,i,c=0;
    printf ("Enter Interger upto which n prime numbeer is to be printed.");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        c++;
        }
        if(c==2)
        {
            printf("%d \n",n);
           
        }
        
    }
}