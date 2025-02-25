#include<stdio.h>

void add(int , int);

int main()
{
    int a = 10;
    int b = 23;
    //int c ;
    // c = add(a,b);
    add(a,b);
   // printf("%d",add(a,b));
    return 0;
}

void add(int a, int b)
{
    int sum = 0;
    sum = a + b;
    printf("%d",sum);
}