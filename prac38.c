#include<stdio.h>
// int foo(int);

// int a = 100;
// int main()
// {
//     int a = 20;
//     printf("%d",foo(a));
//     printf("%d",a);
//     return 0;
// }

// int foo(int c)
// {
//     // int a = 0;
//     a = a + c;
//     return a;
// }

void foo(int x)
{
    switch (x)
    {
    case 1:
        /* code */printf("*");
        case 2:
        /* code */printf("*");
        case 3:
        /* code */printf("*");
        //break;
    
    default:
        printf("*");
    }
}

int main()
{
    foo(2.5);
   // return 0;
}