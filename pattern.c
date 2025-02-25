// SAMPLE PATTERN 



#include<stdio.h>
void main()
{
    int n,i,j;      // input variables
    printf ("Enter the length of your pattern : \n");
    scanf ("%d",&n);     // storing the input

    for (i=1;i<=n;i++)        //  entering number of rows
    {
       for (j=1;j<=n;j++)      // // printing number of rows and space
       {
        if ((i+j)>=(n+1))
        {
            printf ("%d ",i);   // pattern main variable
        }
        else
        {
          printf (" ");     
        }
       }
       printf ("\n");           // change row
    }
}

