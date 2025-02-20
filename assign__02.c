/*Program to check the largest of three numbers using ternary operator. 
*/


#include<stdio.h>
int main ()
{
    int a,,b,c,lar;
    printf ("Enter three numbers\n");
    scanf ("%d %d %d",&a,&b,&c);
    lar =((a>b)&&(a>c)?(a):(b>c)?(b):(c));
    printf ("Largest number of the three are :%d",lar);
    return 0;
}