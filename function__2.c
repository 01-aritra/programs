#include<stdio.h>
#include<conio.h>
void armst()
{
    int i,n,s=0,d,num;
    printf ("Enter number to check whether is an armstrong no. \n");
    scanf ("%d",&n);
    n=num;
    while (n>0)
    {
        d=n%10;
        s=s+(d*d*d);
        n=n/10;
    }
    if (num==s)
    {
        printf ("It is an armstrong number \n");
    }
    else 
    {
         printf ("It is not an armstrong number \n");
    }
}
void krish()
{
    int j,n,d,fact,sum=0,num;
    printf ("Enter number : to check whether it is krishnamurti no. \n");
    scanf ("%d",&n);
    n=num;
     d=n%10;
        for (j=0;j<=d;j++)
        {
            fact = fact*j;
         }
        sum=sum+fact;
        n=n/10;
    
    if (num==sum)
    {
    printf (" it is krishnamurti no.");
    }
    else 
    {
          printf (" it is not a krishnamurti no.");
    }
}
    void main()
   {
      armst();
      krish();
    }