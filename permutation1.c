#include<stdio.h>
#include<stdlib.h>
// Calculating permutation of nPr
// factorial od a number

void permu(int n, int r)
{
    int fact_n = 1;
    for (int i = 1; i <= n; i++)
    {
        fact_n *= i;
    }
    
    int j = n - r;
    int fact_j = 1;
    for (int k = 1; k <= j; k++)
    {
        fact_j *= k;
    }
    // printf("%d",fact_j);
    int permut = (fact_n / fact_j);
    printf("P(%d, %d) = %d\n", n, r, permut);
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    // n = 4;
    int r;
    printf("Enter the value of r: ");
    scanf("%d",r);
    // r = 2;


    permu(n,r);
    return 0;
}