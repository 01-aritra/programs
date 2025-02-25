#include<stdio.h>
int main()
{
    int numA ,numB , sum ,min,mult,div;
    char operator ; 
    printf("Enter the operator ");
    scanf("%c",&operator);
    printf("Enter the numA   ");
    scanf("%d",&numA);
    printf("Enter the numB  ");
    scanf("%d",&numB);
    
    switch (operator)
   {
     case '+':
      sum = numA+numB;
     printf("Result is: %d",sum);
     break;
     case '-':
      min =numA-numB; 
     printf("Result is: %d,",min);
     break;
     case '*':
      mult=numA*numB;
     printf("Result is: %d",mult);
     break;
     case '/':
      div =numA/numB;
     printf("Result is: %d",div);
     break;
     default:
     printf("Incorrect");
  
}
 return 0;
}