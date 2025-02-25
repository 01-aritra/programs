/*DAP ... 


 Ab
 Ab Bc
 Ab Bc Cd
 Ab Bc Cd De
 Ab Bc Cd De Ef                     */


#include<stdio.h>
void main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf(" %c%c",j+64,j+97);
        }
        printf ("\n");
    }
}