#include<stdio.h>
#include<stdlib.h>

void show_mat(int mat[][50],int sz)
{
    printf("The required matrix is : ");
    for (int i=0;i<sz;i++)
    {
        for (int j=0;j<sz;j++)
        {
            printf("%d",mat[i][j]);
        }
    }
}

void gau_f(int mat[][50],int sz)
{
    int i,j,k;
    for (i=0;i<sz;i++)
    {
        for (j=i-1;i++)
    }     
}