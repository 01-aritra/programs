#include<stdio.h>
void main()
{
    int n,d,c=0;
    printf ("Enter number");
    scanf ("%d",&n);
    while (n!=0)
    {
        d=n/10;
        if(d==0)
        c++;
       
      printf ("%d",c);
        
    }
    
}