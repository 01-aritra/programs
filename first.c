/* WAP using switch case 

enter TWO NUMBER and creat multiple cases to add,substract,multiply and divide the numbers .
*/

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int choice ;
    printf ("``````````````````````````````````````MAKE YOUR CHOICE ``````````````````````````````\n");
    printf("Choice 1 : will indicate the addition of two numbers \n");
    printf("choice 2 : will indicate the substraction of two numbers \n");
    printf ("Choice 3: will show the multiplication of two numbers\n");
    printf("choice 3 will show the division of two numbers\n");
    printf ("Enter your choice\n");
    scanf("%d",&choice);
    int num1,num2,sum,subt,mult,div;
    printf ("Enter two numbers\n");
    scanf("%d %d",&num1 , &num2);
    switch (choice){
        case 1 :
        sum = num1 +num2 ;
        printf("SUM of two number : %d",sum);
        
        break;
        case 2 :
        subt =num1 - num2;
        printf ("SUBSTRACTION of two number %d",subt);
        
        break;
        case 3:
        mult = num1 *num2;
        printf ("Multiplication of two numbers  %d",mult);
       
        break;
        case 4 :
        div = num1 / num2 ;
        printf ("DIVISION of two number %d",div);
       
        break;
        default :
        printf ("Enter choice between 1 to 4 only");
    }
    return 0;
    }



