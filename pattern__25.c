/* DAP ...



              *
            * * *
          * * * * *
        * * * * * * *
      * * * * * * * * *                     */



#include<stdio.h>      // header files
void main()            // fain function 
{   
    int row,i,j,k;        // declare variables
    printf ("Enter No. of row: ");
    scanf ("%d",&row);
    for (i=1;i<=row;i++)           // outer for loop
    {
        for (k=1;k<=(row-i);k++)  // inner for loop for space
        {
            printf (" ");         // printing spaces
        }
        for (j=1;j<=2*i-1;j++)  // inner for loop
        {
            printf (" *");           // printing the pattern
        }
        printf ("\n");            // printing new line
    }

}