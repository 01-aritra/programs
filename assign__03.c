/*Program to find largest of 4 numbers and smallest of 4 numbers using if-else statement.*/





#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf ("Enter FOUR Numbeers:\n");
    scanf ("%d %d %d %d",&a,&b,&c,&d);
    printf ("printing the largest number \n");
    {
    if ((a>b) && (a>c) &&(a>d)) 
    {
    printf ("'a' is largest\n");
    }
    else if ((b>a) && (b>c) && (b>d))
    {
    printf ("'b' is largest\n");
    }
    else if ((c>a) && (c>b) && (c>d))
    {
    printf ("'c' is largest\n");
    }
    else 
    {
    printf ("'d' is largest\n");   
    }
    }
    printf ("printing the smallest number\n");
    {
        if (a<b && a<c && a<d)
        {
            printf ("'a' is smallest\n");
        }
        else if (b<a && b<c && b<d)
        {
            printf ("'b' is smallest\n");
        }
        else if (c<a && c<b && c<d)
        {
            printf ("'c' is smallest\n");
        }
        else
        {
            printf ("'d' is smallest\n");
        }
    }

}