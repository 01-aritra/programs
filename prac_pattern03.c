#include<stdio.h>
#include<stdlib.h>

void pattern_priting(int n)
{
    for (int i = 1; i < n; i++)
    {
        // Space Printed
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        // Pattern printed
        for (int k = 1; k > i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n = 5;
    pattern_priting(n);
    return 0;
}