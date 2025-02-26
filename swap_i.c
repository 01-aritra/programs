/* WAP in C to enter two numbers as an input and swap each others value
using third variable  :

                                For eg-- INPUT : A=1 B=2 
                                         OUTPUT: A=2 B=1*/

#include <stdio.h>
int main()
{
    int i,j,k;
    printf (" Enter two values :\n");
    scanf ("%d %d",&i,&j);
    k=i;
    i=j;
    j=k;
    printf ("The Swaped Values :%d %d ", i, j);
    return 0;
}

                                         