// WAP to enter a number and check whether it is an Armstrong Number or Not. For Eg - 153
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
   int n,r,c=0,temp;
   printf ("Enetr a number");
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


    