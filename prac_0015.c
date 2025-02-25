//Octal to decimal

#include<stdio.h>

int power(int x)
{
    int result = 1;
    if (x == 0)
    {
        return 1;
    }
    else
    {
        while (x > 0)
        {
            result = result * 8;
            x--;
        }
        return result;
    }
}
int main()
{
    int n, i = 0;
    scanf("%d",&n);
    while (n > 0)
    {
        int rem = n % 10;
        oct = oct + rem * power(i++);
        n = n / 10;
    }
    printf("%d ", oct);
    return 0;
}