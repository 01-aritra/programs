//Check the occurance of a number between a certain range

#include<stdio.h>

int main()
{
    int x1,x2,n;
    int count = 0,temp,num;
    printf("Enter the starting and ending num");
    scanf("%d %d",&x1 ,&x2);
    printf("Enter the number to check it's occurance ");
    scanf("%d",&n);
    for (int i = x1; i <= x2; i++)
    {
        num = i;
        while (num > 0)
        {
            temp = num % 10;
            if (temp == n)
            {
                count++;
            }
            num = num / 10;
        }
    }
    printf("%d",count);
    return 0;
}