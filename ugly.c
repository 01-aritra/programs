// WAP to enter a number and check whether it is a ugly no. or not

#include<stdio.h>
#include<stdlib.h>

void check_f_ugly(int n)
{
    int flag = 1;
    int num = n;
    int i = 2;
    if ( n % i == 0)
    {
        n = n / i;
    }
    else 
    {
        i++;
        if (i > 5)
        {
            flag = 0;
            return;
        }
    }  
    if ( flag == 1)
    {
        printf("It is an ugli no.");
    }  
    else
    {
        printf("It is not an ugly no.");
    }
}

int main()
{
    int n =4;
    check_f_ugly(n);
    return 0;
}