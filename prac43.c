//Check whether the entered no. is prime or not


#include<stdio.h>
#include<stdlib.h>

void  check_for_prime(int n)
{
    int count = 0;
    if (n <= 1)
    {
        printf("Enter no. is either 1 or 0");
    }
    else
    {
        for (int i = 2; i <= n; i++)
            {
                if (n % i == 0)
                    {
                        count++;
                    }
            }
    } 
    
   
    if (count <= 1)
    {
        printf("Entered no. is a prime no.");
    }
    else
    {
        printf("Entered no. is not a prime no.");
    }
    
}

int main()
{
    int n = 44;
    check_for_prime(n);
    
    return 0;
}