// Q: Write a program to find out the odd factors of a number. (ip:72; op:1,3,9)

#include <stdio.h>
int main()
{
    int n,i;
     int c=0;
    printf ("Enter a number : ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        
         printf ("%d  ",i);
        c++;
        }
       printf ("\nNo. of factors %d\n",c);
    return 0;
}