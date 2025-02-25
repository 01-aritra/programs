// WAP to check whether the entered no. is a special/strong no.

#include<stdio.h>
#include<stdlib.h>

void spl(int n)
{
    int temp;
    int fact = 1;
    int sum =0;
    int num = n;
    while (n > 0)
    {
        temp = n % 10;
        int fact = 1;
        for (int i = 1; i <= temp; i++)
        {
            fact = fact * i;
            printf("%d\n",fact);
            //sum = sum + fact;
            //printf("%d ",sum);
        }
        //printf("%d\n",fact);
        sum = sum + fact;
        printf("%d ",sum);
        n= n / 10;        
    }


    if ( num == sum)
    {
        printf("True");
    }
    else{
        printf("false");
    }
    
}

int main()
{
    int n =145;
    spl(n);
    return 0;
}