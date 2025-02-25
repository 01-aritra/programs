#include<stdio.h>
int main()
{
    int p,sum=0,num;
int choice,n;
printf ("Enter your choice\n");
scanf ("%d",&choice);
printf("Enter numer to check :\n");
scanf ("%d",&n);
switch (choice)
{
    case 1 :
    
    
    num=n;
    for(int i =0;i<n;i++)
    {
     p=n%10;
     sum=sum+(p*p*p);
     n=n/10;
    }
    if (num==sum)
    {
        printf ("It is an Armstrong Number");
    }
    else 
    {
        printf ("It is not an Armstrong Number");
    }
    
    break;
    case 2 :
    break;
    default :
    printf ("Enter a valid choice");
    case 9/3+1 :
    {
        int num1 = 6,num2 = 5;
        int sum = (num1 + num2)/n;
        printf ("Trequired result : %d",sum);
        break;
    }

}
return 0;
}
