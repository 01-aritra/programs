//Sum of series

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d",&n);

    float sum ;
    for (int  i = 1; i <= n; i++)
    {
        sum =sum +(1.0/i);
        //printf("%f ",sum);
    }
    printf("%f",sum);
    return 0;
}