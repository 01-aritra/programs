/* WAP to enter a number and check whether it is prime or not.
                               For eg -> Input --  5
                                         Output-- It is a prime number.
                                   */

#include <stdio.h>
int main()
{
    int a, flag = 0;
    printf("enter a number to check prime : ");
    scanf("%d", &a);
    for (int i = 2; i * i < a; i = i + 2)  // '9' is not a prime number but it is showing ....
    {
        if (a % i == 0)
        {
            printf("it is not a prime number ");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("It is a prime number ");
    }
    return 0;
}

                                