/* If the three sides of a triangle are entered through the keyboard,
WAP to check whether the triangle is valid or not.
The triangle is valid if the sum of two sides is greater than the 
largest of the three sides.

If the three sides of a trisngle are entered through the 
keyboard, WAP to check whether the triangle is isoscales, equilateral, scalene or right-angledtriangle.*/


#include<stdio.h>
#include<stdlib.h>


void triangle(int s1,int s2,int s3)
{
    
    if(s1 > s2 && s1 > s3)
    {
        if (s2 + s3 > s1)
        {
            printf("The triangle is valid \n");
        } 
        else
        {
            return;
        }       
    }
    else if (s2 > s1 && s2 > s3)
    {
        if (s1 + s3 > s2)
        {
            printf("The triangle is valid\n");
        }        
        else
        {
            return;
        }
    }
    else
    {
        if (s1 + s2 > s3)
        {
            printf("The triangle is valid\n");
        }  
        else
        {
            return;
        }      
    }
}

void ck_tri(int s1,int s2,int s3)
{
    if (s1 == s2 && s1 == s3 && s2 == s3)
    {
        printf("Equilateral Triangle ");
    }
    else if (s1 != s2 && s1 != s3 && s2 != s3)
    {
        printf("Scalene Triangle ");
    }
    else if ((s1*s1 + s2*s2 == s3*s3) || (s1*s1 + s3*s3 == s2*s2) || (s2*s2 + s3*s3 == s1*s1))
    {
        printf("Right angled triangle");
    }    
    else
    {
        printf("Isoscalese Triangle");
    }        
}


int main()
{
    int s1 = 30;
    int s2 = 30;
    int s3 = 30;


triangle(s1,s2,s3);
ck_tri(s1,s2,s3);
return 0;
}