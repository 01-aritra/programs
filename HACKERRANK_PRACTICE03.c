#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b; float x,y;
    float d,f;int p,q;
    //printf ("Enter two numbers : ");
    scanf ("%.1f %.1f",&a,&b);
    // scanf ("%f %f",&x,&y);
    // p=a+b; q=a-b;
    d=a+b;f=a-b;
    //  printf ("%d %d ",p ,q);
    printf ("%d %d",d,f);
    return 0;
}
