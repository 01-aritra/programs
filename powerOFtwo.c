/* WAP to check whether a number is a power of two ?*/

#include<stdio.h>
int main()
{
   int a,c=0,n,b;
   printf ("Enter number to check \n");
   scanf("%d",&a);
  n=a;
   while (a>0)
   {
    b=a&1;
    if(b==1)
    c++;
    a=a>>1;

   } 
   if (c==1)
   {
    printf("Power of 2 is %d",n);
   }
   else
   {
    printf("Not");
   }
   }
