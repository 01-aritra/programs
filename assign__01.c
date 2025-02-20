/*Mr. Anupam Ghosh is an employee of a private firm. 
His basic salary is Rs. 8000. The dearness allowance (D.A.) 
is 74% of his basic salary. Write a program to calculate his 
gross or total salary (where basic salary may be given from the user) 
Total = Basic + (0.74 * Basic) + (0.15 * Basic). */

#include<stdio.h>
int main()
{
    int ba,Total;
    printf ("Enter Basic Salary");
    scanf ("%d",&ba);
    Total = ba+(0.74*ba)+(0.15*ba);
    printf("gross salary is :%d",Total);
}
