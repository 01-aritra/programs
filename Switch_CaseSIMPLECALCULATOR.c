// simple arithmatic calculator

#include<stdio.h>
void main()
{
int choice ,n1,n2;     //user's choice input
printf (" CASE 1: will show sum of two number \n ");
printf (" CASE 2: will show substractin of two number \n");
printf (" CASE 3: will show the multiplication of two number\n");
printf (" CASE 4: will show the divition of two number \n");
printf ("Enter your choice \n");
scanf ("%d",&choice);     // storing choice of user
switch (choice)     {  
case 1:        // first case
{  
int sum;
printf ("enter first number as N1  \n");
scanf ("%d",&n1);
printf ("Enter scecond number \n");
scanf ("%d",&n2);
sum= n1+n2;              // adding two number
printf (" sum of two number is  = %d\n",sum);  // printing the sum of two number
break;
}
case 2:             // second case
{
int sub;
printf ("enter first number as N1  \n");
scanf ("%d",&n1);
printf ("Enter scecond number \n");
scanf ("%d",&n2);

    if (n1>n2)              // checking the greater number between n1 and n2
    {
        sub=n1-n2;       // sub of n1 - n2 since n1>n2
    }
    else                   // else statement 
    {
        sub = n2-n1;       // sub of n2 - n1 since n2 - n1
    }
    printf ("Subtraction of two number is = %d\n",sub);      // printing the result   
    break;
}
case 3:              // third case
{
int mult;  
printf ("enter first number as N1  \n");
scanf ("%d",&n1);
printf ("Enter scecond number \n");
scanf ("%d",&n2);
    
    mult = n1*n2;            //multiplication of two number
    printf (" multiplication of two number is %d\n",mult); //printing the result
    break;
}
case 4 :
{
int div;
printf ("enter first number as N1  \n");
scanf ("%d",&n1);
printf ("Enter scecond number \n");
scanf ("%d",&n2);

    if (n1>n2)     // checking the greater number between n1 and n2
    {
        div = n1 /n2;   // division of n1/ n2
        }
            else
             {
        div = n2 / n1;    // division of n2 / n1 since n2 is greater than n1
    }
    printf ( "division of twwo number is = %d \n",div); // printing the result of division

}
    break;

default :       //default statement
printf ("::::::::::::::::Enter number according to the instruction :::::::::\n");  // default output
    
}
}