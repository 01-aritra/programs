//Decimal to Hexa Decimal

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, rem, i = 0, j;
    char Hexa[16];
    scanf("%d",&n);
    while (n > 0)
    {
        rem = n % 16;
        if (rem >= 10)
        {
            Hexa[i++] = rem + 55;
        }
        else
        {
            Hexa[i++] = rem + 48;
        }
        n = n / 16;
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf("%c ",Hexa[j]);
    }
    return 0;
}