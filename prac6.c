#include<stdio.h>
#include<stdlib.h>

void work_ar(int st,int ed)
{
    int i;
    for (i=st;i<=ed;i++)
    {
        if (i==1)
        {
            printf("one\n");
        }
        if (i==2)
        {
            printf("two\n");
        }
        if (i==3)
        {
            printf("three\n");
        }
        if (i==4)
        {
            printf("four\n");
        }
        if (i==5)
        {
            printf("five\n");
        }
        if (i==6)
        {
            printf("six\n");
        }
        if (i==7)
        {
            printf("seven\n");
        }
        if (i==8)
        {
            printf("eight\n");
        }
        if (i==9)
        {
            printf("nine\n");
        }
        if ( i> 9)
        {
            if (i%2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
        }
        
    }
}

int main()
{
    int n1,n2;
    n1= 3;
    n2 = 15;

    work_ar(n1,n2);
    return 0;
}