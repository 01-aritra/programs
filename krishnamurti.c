/*WAP to enter a number and check whether it is a krishnamurti no. or not .
A Krishnamurthy number is a number whose sum of the factorial of digits is equal to the number itself. For example 145, sum of factorial of each digits: 
1! + 4! + 5! = 1 + 24 + 120 = 145
so 145 is a Krishnamurti no. */

#include <stdio.h>
int main()
{
    int n, r, m = 1, sum = 0, t;
    printf("enter any number to check whether it is a krishna murti no. or not");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        r = n % 10;
        for (int i = 1; i <= r; i++)
        {
            m = m * i;
        }
        sum += m;
        n = n / 10;
        m = 1;
    }
    if (sum == t)
    {
        printf("it is a krishnamurthy number");
    }
    if (sum != t)
    {
        printf("it is not a krishna murthy number");
    }

return 0;
}