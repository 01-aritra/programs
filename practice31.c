// krishnamurti number    i.e. :- sum of factorial 

#include <stdio.h>
void main()
{
    int i,num,p,sum=0,m=1,temp;
    printf ("Enter number to check w/t it is a akrishnamurti nno. or not. \n");
    scanf ("%d",&num);
    temp=num;
    while (num>0)
    {
        p=num%10;
        for (i=1;i<=p;i++)
        {
            m=m*i;
        }
        sum=sum+m;
        num=num/10;
    }
    if (temp==sum)
    {
        printf ("Krinshnamurti no.");
    }
    else
    {
        printf ("Not");
    }
}