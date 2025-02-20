/* WAP in C an array is a type of data structure that stores elements of the 
same type in a contiguous block of memory. In an array,A , of size N, 
each memory location has some unique index, i (where 0<i<N), that can be referenced as A[i] orAi .

Reverse an array of integers.*/

#include<stdio.h>
int main()
{
    int a[5],i;
    for (i=0;i<=4;i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=5;i<=0;i--)
    {
        printf ("%d %d %d %d",a[i]);
    }
    return 0;
}