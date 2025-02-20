#include<stdio.h>
int main()
{
    float r,c;
    printf ("Enter Farhenhite");
    scanf ("%f",&r);
    c=((r-32)/9)*5;
    printf ("The converted celsius is :%.2f",c);
    return 0;
} 