//Pattern

#include<stdio.h>
#include<stdlib.h>

void print_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }    
}

int main()
{
    int n = 5;
    print_pattern(n);
    return 0;
}