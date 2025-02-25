#include<stdio.h>
void tower (int n,char beg,char aux,char end)
{
    tower (n,beg,aux,end);

    if (n<=0)
    printf ("\n illegal entry");
    else if (n==1)
    printf ("\n move disc %c to %c",beg ,end);
    else
    {
        tower (n-1,beg,end,aux);
        tower (1,beg,aux,end);
        tower (n-1,aux,beg,end);
         }
}
int main()
{
    int n;
    char beg
}