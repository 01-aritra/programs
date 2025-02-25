/*DAP ...

 E
 D D
 C C C
 B B B B
 A A A A A                           */


#include<stdio.h>
void main()
{
    int i,j;
    for (i=5;i>=1;i--)
    {
        for (j=5;j>=i;j--)
        {
            printf(" %c",i+64);
        }
        printf ("\n");
    }
}