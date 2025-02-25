// Transpose of a matrix

#include<stdio.h>
#include<stdlib.h>

#define Max_Mat 30

void transpose(int mat[][Max_Mat],int row,int col)
{
    int i , j;
    int result[Max_Mat][Max_Mat];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            result[j][i] = mat[i][j];
        }        
    }   
}

void PrintMatrix(int mat[][Max_Mat],int row,int col)
{
    int i,j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d"mat[i][j]);
        }
    }
}


int main()
{
    int mat[Max_Mat][Max_Mat],row,col;

    printf("Enter the size of row : \n");
    scanf("%d",&row);

    printf("Enter the size of column : \n");
    scanf("%d",&col);

    printf("Enter Matrix : ");
    
}