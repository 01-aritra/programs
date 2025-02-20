/*A university student has the following rules for a subject to qualify for a degree 
with A as the main subject and B as the subsidiary subject:


a)	He should get 55 percent or more in A and 45 percent or more in B.
b)	If he gets less than 55 percent in A he should get 55 percent or more in B.
 However, he should get at least 45 percent in A.
c)	If he gets less than 45 percent in B and 65 percent or more in A he is 
allowed to re appear in an examination in B to qualify.
d)	In all other cases he is declared to have failed.


WAP to receives marks in and B and Output whether the student has passed, 
failed or is allowed to reappear in B.*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the marks scored in A:\n");
    scanf ("%d",&a);
    printf ("Enter the marks scored in B:\n");
    scanf ("%d",&b);
    if (a>=55&&b>=45)
    {
        printf ("QUALIFY");
    }
    else if (a<=55&&a>=45&&b>=55)
    {
        printf ("QUALIFY");
    }
    else if (b<=45&&a>=65)
    {
        printf ("He is allowed to reappear in an examination in B to qualify");
    }
    else
    {
        printf ("Declared as FAILED");
    }
    return 0;
}