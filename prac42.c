//

#include<stdio.h>

void foo(char *a)
{
    // char ch[2][10] = {"parakram","vijay"};
   // printf("%s",*ch+3);
   // printf("%s",*ch + 8);
    //  printf("%s",*(ch+1)+4);

    if(*a && *a != '')
    {
        foo(a+1);
        putchar(*a);
    }
    //return 0;
}

int main()
{
    char *a = "ABCD EFGH";
    foo(a);
    return 0;
}