#include<stdio.h>
void main()
{
    int i,d,s,n,num,fact;
    printf ("Enter number to check whether it is a krishnamurti no. or not\n");
    scanf ("%d",&n);
    n=num;
    
    d=n%100;
    for (i=1;i<=d;i++)
    {
        fact=fact*i;
        
    }
    s=s+fact;
    n=n/10;
    if (s==num)
    {
        printf ("YES , Krishnamurti no. %d",s);
    }
    else
    {
         printf ("NO , it is not a krishnamurti no. %d",s);
    }
}

    
