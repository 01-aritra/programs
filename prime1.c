#include<stdio.h>
int main()
{
    int num,c=0;
    printf("Enter a number to check whether it is a prime no. or not:\n");
    scanf ("%d",&num);
    if(num==1)
    {
        printf ("The no. is prime since 1 is not considerd as prime\n");
    }
        else if(num==0)
        {
            printf ("The number you have given is 0. 0 is not a prime number.\n");
            return 0;
        }
        for (int i=1;i<=num;i++)
        if(num%i==0)
        c++;
        if (c==2)
        printf ("The number is prime    %d\n",num);
        else
        printf ("The number is NOT prime number   %d \n",num);
        return 0;
    }
