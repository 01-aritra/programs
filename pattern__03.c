/*
Write a pattern :
             * * * * *
             * * * *
             * * *
             * * 
             * 

                                                      */


#include<stdio.h>
void main()
{
   int i,j;
     for ( i=0;i<=5;i++)
     {
        for (j=i;j<=5;j++)
        {
       // printf(" *");
       printf ("%d ",j);
     }
     printf ("\n");
}
} 