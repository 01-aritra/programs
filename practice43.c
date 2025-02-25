#include<stdio.h>
void pat1(int n)
{
    int i,j;
    for (i=5;i>=1;i--)
    {
        for (j=5;j>=i;j--)
        {
            printf(" %d",j);
        }
        printf ("\n");
    }
}
void pat2(int n)
{
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            printf (" %d",i);
        }
        printf ("\n");
    }
}
pat3(int n)
{
/*    * * * * *
        * * * *
          * * *
            * *
              *           */
    int i,j,k;
    for(i=0;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            for(k=n;k>=1;k--) 
            {
            printf (" %d",i);
            }
            printf("%d");
        }
        printf("\n")
    }
}
 int main()
{
    int n,ch;
    printf ("choose your matrix");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
    printf("Enter the size of your matrix");
    scanf("%d",&n);
    printf("Pattern 1: Right angle triangle matrix");
    printf("\n");
    pat1(n);
    break;
        }
        case 2:
        {
    printf("Enter the size of your matrix");
    scanf("%d",&n);
    printf("\n");
    printf("Pattern 2: Square Matrix");
    printf("\n");
    pat2(n);
    break;
    }
      case 3:
        {
    printf("Enter the size of your matrix");
    scanf("%d",&n);
    printf("\n");
    printf("Pattern 3:");
    printf("\n");
    pat3(n);
    break;
    }
    default :{
        printf("Enter a different choice:1or2");
    }
    }
    return 0;
}
