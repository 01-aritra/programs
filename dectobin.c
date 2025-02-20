// Convert decimal to binary :

#include<stdio.h>
#include<stdlib.h>

void dec_to_bin(int num)
{
    int rem;
    int a[1000];
    int i = 0;
    if (num == 0)
    {
        printf("0000");
        return;
    }
    
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        a[i] = rem;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",a[j]);
    }
}

int main()
{
    int n = 33;
    dec_to_bin(n);
    return 0;
}