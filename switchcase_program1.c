/* WAP using Switc Case statement 
           + will indicate addition of two number
           - will indicate substraction of two number 
           * will indicate multiplication of two number
           / will indicate division of two number

           do the following program to execute the value by entering two number. */
                                  
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char chat ;
    printf ("~~~~~~~~~~~MAKE YOUR CHOICE ~~~~~~~~~~~~~~~\n");
    printf ("CHARACTER '+' Will show addition of two nunbers\n");
    printf ("CHARACTER '-' WILL SHOW THE SUBSTRACTION BETWEEN TWO NUMBER \n");
    printf ("CHARACTER '*' Will show the multiplication of two numbers \n");
    printf ("CHARACTER '/' Will show the divition of two numbers \n");
    printf ("Enter character :\n");
    scanf ("%c",&chat);
    int num1,num2;
    printf ("Enter num  1 and num 2 ");
    scanf ("%d %d",&num1 , &num2);
    switch (chat)
    {
        case '+' : printf ("%d + %d = %d",num1,num2,num1 +num2);
        break;
        case '-' : printf ("%d - %d = %d",num1 ,num2,num1-num2 );
        break;
        case '*' : printf ("%d * %d = %d",num1 ,num2,num1*num2);
        break;
        case '/' : printf ("%d / %d =%d",num1,num2,num1/num2);
        break;
        default :
        printf ("Enter a valid character as an Input");
    }
    return 0;
}


  