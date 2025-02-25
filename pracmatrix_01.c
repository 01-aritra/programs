//In a matrix : Rotate the matrix by 360

#include<stdio.h>
#include<stdlib.h>


#define R 3
#define C 3
void RotateMatrix(int mat[R][C],int row,int col,int rotated[R][C])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            rotated[j][row - 1 -i]= mat[i][j];
        }        
    }    
}

void display_matrix(int mat[R][C],int row,int col)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[R][C] = {{1,2,3},{4,5,6},{7,8,9}};
    int rotated[R][C];
    printf("Before Rotation :\n");
    display_matrix(mat,R,C);
    printf("After 90* Rotation : \n");
    RotateMatrix(mat,R,C,rotated);
    display_matrix(rotated,R,C);
    return 0;
}