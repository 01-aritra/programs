#include<stdio.h>
void main()
{
    int n,i,j;
    int a[2][2];
    printf ("Enter the values of the array");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("%d + %d",a[i][j],a[j][i]);
    
}