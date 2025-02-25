#include<stdio.h>

void print_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = n; j > i; j--)
        {
            printf("  ");
        }
        // Print stars
        for (int k = 1; k <= i; k++)
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
