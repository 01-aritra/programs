#include<stdio.h>
void main()
{
    int i,n1,n2,sum=0,j;
    printf ("Enter startin number : ");
    scanf ("%d",&n1);
    printf ("Enter end number : ");
    scanf("%d",&n2);
    for (i=n1;i<=n2;i++)
    {
        for (j=2;j<=i;j++)
        {
      if (i%j==0)
            break;
    }
    if (i==j)
   sum=sum+j;
    printf ("%d \n ",sum);
    printf ("%d ",j);
}
}