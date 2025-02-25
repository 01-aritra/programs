// Bitwise Operator in Hackerrank

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,i,j,and=0,or=0,xor=0;

    //value of n and k
    // printf("Enter the value of n and k :");
    scanf("%d %d",&n , &k);

    for (i=1;i<n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            if ((i&j) > and && (i&j)<k)
            and=i&j;
            if((i|j) > or && (i|j)<k)
            or=(i|j);
            if((i^j) > xor && (i^j) < k)
            xor = (i^j);
        }
    }
    printf("%d\n",and);
    printf("%d\n",or);
    printf("%d\n",xor);

    return 0;
}