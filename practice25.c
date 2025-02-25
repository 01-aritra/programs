//   sum = 1 +  1 1  +  1 1 1  +  1 1 1 1...

//      upto n-terms.

#include<stdio.h>
void main()
{
   int i,n,sum=0;         // variables require to execute the program
   printf ("Enter number of terms :");
   scanf("%d",&n);             // assing user's value
   for (i=1;i<=n;i++)
   {
      sum +=1;                   //final addition of the expression.
   }
   printf("sum = %d",sum);  // printing the output of the program.
}