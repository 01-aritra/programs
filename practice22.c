#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
        for (j=i;j<=8;j++)
        {
            for(k=j;k<=i;k++)
            {
               printf (/*"%d ",&k*/" * "); 
            }
            printf ("  ");
        }
        printf (" \n");
    }
}