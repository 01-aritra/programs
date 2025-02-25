// hcf of two number or gcd

#include<stdio.h>
#include<stdlib.h>



int main()
{
    int n1,n2,min,gcd,lcm;
    scanf("%d",&n1);
    scanf("%d",&n2);
    min = (n1 < n2) ?  n1 : n2;

    for (int i = 1 ; i <= min ; i ++)
    {
        if ( n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    lcm = (n1 * n2)/ gcd;

    printf(" %d", gcd);
    printf(" %d" , lcm);
    return 0;
}