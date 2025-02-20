/* Write a program to enter array , reverse it and add it to the 
   original array.  




*/
#include<stdio.h>
void main()
{
        int ar[50],i,n,sum[50];
        printf ("Enter the size of array\n");
        scanf ("%d",&n);
        printf ("enter the array :\n");
        for (i=0;i<=n;i++)
        {
                scanf ("%d",&ar[i]);
        }
        printf ("Reversed array :");
        for (i=n;i>=0;i--)
        {
                printf ("%d ",ar[i]);
        }
        for (i=0;i<=n;i++)
        {
                sum[i]=ar[i]+ar[n-i-1];
        }
        printf ("\t\nResult : ");
        for (i=0;i<=n;i++)
        {
                printf (" %d",sum[i]);
        }

}