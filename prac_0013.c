//Decimal to octal

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, Number[16,rem,i = 0 , j , octal = 0]
    printf("Enter a Decimal number : ");
    scanf("%d",&n);

    while (n!=0)
    {
        rem = n % 8;
        Number[i++] = rem;
        n = n / 8;
    }
    for (j = i - 1; j >= 0; j--)
    {
        octal = octal * 10 + Number[j];
        printf("%d ",octal);
    }
    
    return 0;
}