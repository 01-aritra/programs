//Fibonacci using recursion 

#include<stdio.h>
#include<stdlib.h>


// recursion 
// display nth place of the fibonacci

int fib(int n) {
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }
    
    int ans = fib(n - 1) + fib(n - 2);
    return ans;    
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",fib(n));
    return 0;
}