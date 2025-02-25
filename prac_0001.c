//Finding the square root of a number

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int i;
    int ans = 1;;
    
    for (i = 1; i <= n/2; i++)
    {
        if (i * i <= n)
        {
            ans = i;
        }
        else {
            break;
        }
    }
    
    printf("%d ",ans);
    return 0;
}