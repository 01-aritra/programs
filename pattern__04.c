/* DAP...

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/


#include<stdio.h>
void main()
{
    int i,j;
    for (i=0;i<=4;i++)
    {
        for (j=1;j<=5;j++)
        {
            printf (" %c",j+64);
        }
        printf ("\n");
    }
}