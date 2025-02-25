#include<stdio.h>
int main()
{
    int yr;
    printf ("Enter Year\n");
    scanf ("%d",&yr);
    if (yr%4==0)
    {printf ("yes");
    }
    else
    {
        printf ("not");
    }
    return 0;
}
