#include<stdio.h>  // start
void main()   //main() function
{
    int choice;         // choice according to the user input
    printf ("Case 1:will show the armstrong number :\n");
    printf ("Case 2:will show the prime number :\n");
    printf ("Case 3:will show the palendrome no.\n");
    printf ("Enter your choice :");
    scanf ("%d",&choice);  // coice of user is stored 
    switch (choice)
    {
        case 1:// first case
        /*Q: a program to check a number whether it is an armstrong number or not.
        
        For eg- 153
        OUTPUT- It is an armstrong number.*/
        {
         int n,r,c=0,temp;      //  variable require to compute the program 
          printf ("Enetr a number to check whether it is an armstrong number or not\n");
          scanf ("%d",&n);   // storing the entered number
          temp=n;   // storing the value 0of n in a third variable
          while (n>0)    // loop statement
        { 
          r=n%10;    // separating each number by nmber 
          c=c+(r*r*r);    //adding the cueb of each number
          n=n/10;   //loop ending
          }
          if (temp==c)    // condition checking
          {
          printf ("%d It is an Armstrong Number",c);
          }
           else     //either loop statement
          {
           printf ("%d It is not an Armstrong Number",temp);
           }
        break;  //termination of the case (First)
        }
        case 2:       //Q: chcking the input number is whether a prime number or not.
        {
        printf ("Question : to chcke whether the inputed number is a prime number or not\n");
        /*Defn. of prime no.:- Anumber is said to be prime when it has only two factors
        
        INPUT :- 5
        OUTPUT:- it is a prime number.*/
        int n,i1,c=0;     // variables require for the program.
        printf ("enter number to check whether it is a prime number or not.\n");
        scanf ("%d",&n);   // taking the input no and storing it in the program. 
        if (n==1)          //checking the input number is whether 1 , if 1 then according output will be shown 
        {
            printf ("1 is a prime number.\n\t");
        }
        else if (n==0)  // checking the input number is whether 0 , if 0 then according output will be shown
        {
            printf ("0 is not a prime number.\n\t");
        }
        for (i1=1;i1<=n;i1++)   //for loop variable
        
            if (n%i1==0)       // finding the divisor of the number
            c++;
            if (c==2)    // condition checking 
            {
                printf ("The number %d is prime.\n\t",n);
            }
            else     //else condition to show the input no. is not prime.
            {
                printf ("The nummber %d is not prime \n\t",n);
            }
        
      break;   // termination pof the case.
        }
      case 3:          // Q: chcking whether a number is a palendrome number or not.
      {
      printf ("program to check whether a number is a palendrome number or not:\n");
      /* Defn.  of palendrome no.:- a number that remains same when it's digits are reversed

      For eg:- 101 
      output:- 101*/
      int num1,r,s=0,temp;   // variables required to continue a program .
      printf ("Enten a number to check whether it is a palendrome number or not.\n");
      scanf ("%d",&num1);   // storing a variables
      temp=num1;
      while (num1>0)    // while loop (Entery controal loop)
      {
        r=num1%10;    //finding the  divisor of input no. separating each digit one by one for reversing .
        s=r+(s*10);     // adding each digit separately after reversing
        num1=num1/10;    //loop ending
      }
    if (temp==s)      // comparing the result with the input number to find the reversed number.
    {
        printf ("%d It is a palendrome no.\t",s);
    }
    else   //   else statement (otherwise condition).
    {
        printf ("% d It is not a palendrome no.\t",temp);
    }
     break;    // termination of the case (third)
      }
     default :  // default statement it the condition goes false the desire output will be shown .
     printf ("Enter according to the statement\t");   // the desire outpput 
    }
}  // final output ending