/* WAP to enter a number and reverse it's digit .
    For Eg:                          Input - 123 
                                     Output- 321*/


#include<stdio.h>
int main()
{
    int n,i,rev=0;
    printf ("Enetr Number : \n");
    scanf ("%d",&n);
    while (n>0)
    {
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
    printf ("reversed digit : %d \n",rev);
    return 0;
}

