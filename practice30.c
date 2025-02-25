// palindrome array
#include<stdio.h>
#include<afxres.h>

void main()
{
    int ar[5],i,flag =0;
    printf ("Enter array :\n");
    for(i=0;i<=4;i++)
    {
        scanf ("%d",&ar[i]);
    }
    for (i=0;i<=4;i++)
    {
        if (ar[i]!=ar[5-i-1])
        {
            flag =1;
            break;
        }
    }
           if (flag == 0)
           {
             printf ("Palendrome number:\n");
           }
          else 
           {
            printf ("Not a palendrome array.\n");
           }
    
    printf ("Reversed array :\n");
    for (i=4;i>=0;i--)
    {
        printf ("%d ",ar[i]);
    }
}