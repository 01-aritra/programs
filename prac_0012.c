//Decimal to Binary

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 0,j, Number[16], n, rem, count = 0,temp;
    
    printf("Enter Decimal Number : ");
    scanf("%d",&n);
    while (count < 16)
    //{
        Number[count++] = 0;// }
        while (n != 0)
        {
            rem = n % 2;
            Number[i++] = rem;
            n = n / 2;
        }
        for  (i = 0, j = 15; i < j;i++ , j--)
        {
            temp = Number[i];
            Number[i] = Number[j];
            Number[j] = temp;
        }      
    //}
    for (i = 0; i < 16; i++)
    {
        printf("%d ",Number[i]);
    } 
    return 0;
}