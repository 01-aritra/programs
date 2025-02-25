// practicing functions in c!!


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void sum1()
{
   int a,b,sum;
   printf ("Enter the value of a\n");
   printf ("Enter the value of b\n");
   scanf ("%d  %d",&a,&b);
   sum = a+b;
   printf ("%d +%d = %d\n",a,b,sum);
} 
void arms()
{
   int n,r,c=0,temp;
   printf ("Enetr a number to check whether it is an armstrong number or not.  ");
   scanf ("%d",&n);
   temp=n;
   while (n>0)
   {
    r=n%10;
    c=c+(r*r*r);
    n=n/10;
   }
   if (temp==c)
   {
   printf ("%d It is an Armstrong Number",c);
   }
   else
   {
   printf ("It is not an Armstrong Number");
   }
}
void main()
{
    sum1();
    arms();
}