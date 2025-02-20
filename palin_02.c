// Check the entered number is a palindromic number or not

#include<stdio.h>
#include<stdlib.h>

void check_palin(int num)
{
    int n = num;
    int rem , pal = 0;
    while (num)
    {
        rem = num % 10;
        pal =rem+(10 * pal);
        // printf("%d ",pal); // just for checking each line
        num = num / 10; 
    }
    if (n == pal)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

int main()
{
    int n = 131;
    check_palin(n);
    return 0;
}