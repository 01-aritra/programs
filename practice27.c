// PYRAMID Pattern  

/*              1
               2 2 
              3 3 3 
             4 4 4 4  
            5 5 5 5 5 
            upto
           n n n n n n                                                                 */

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
          printf (" ");     //printing the spaces
        }
       }
       printf ("\n");           // change row
    }
}
