/*Program to find largest of 4 numbers and smallest of 4 numbers using if-else statement.*/

#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf ("Enter FOUR Numbeers:\n");
    scanf ("%d %d %d %d",&a,&b,&c,&d);
    printf ("printing the largest number ");
    {
    if ((a>b) && (a>c) &&(a>d)) 
    {
    printf ("'a' is largest");
    }
    else if ((b>a) && (b>c) && (b>d))
    {
    printf ("'b' is largest");
    }
    else if ((c>a) && (c>b) && (c>d))
    {
    printf ("'c' is largest");
    }
    else 
    {
    printf ("'d' is largest");   
    }
    }
    printf ("printing the smallest number");
    {
        if (a<b && a<c && a<d)
        {
            printf ("'a' is smallest");
        }
        else if (b<a && b<c && b<d)
        {
            printf ("'b' is smallest");
        }
        else if (c<a && c<b && c<d)
        {
            printf ("'c' is smallest");
        }
        else
        {
            printf ("'d' is smallest");
        }
    }
return 0;
}