#include<stdio.h>
#include<string.h>

void check(int n,float mat[][2])
{
    int der = 0;
    der = mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];   
    printf("%d",der);
}
int main()
{
    int n = 2;
    int matrix[][2] = {{3,5},{6,9}};
    return 0;
}