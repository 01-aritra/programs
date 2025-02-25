// Sample input :
//  8
//  11

// Sample Output 
// Eight 
//nine 
// even 
// odd


#include<stdio.h>

void check1(int n1)
{
    if(n1<9)
    {
    for (int i =n1;i<=9;n1++,i++)
    {
         if (n1 == 1)
        {
            printf("one\n");
        }
        else if (n1== 2)
        {
            printf("two\n");
        }
        else if (n1 == 3)
        {
            printf("three\n");
        }
        else if (n1 == 4)
        {
            printf("four\n");
        }
        else if (n1 == 5)
        {
            printf("five\n");
        }
        else if (n1 == 6)
        {
            printf("six\n");
        }
        else if ( n1 == 7)
        {
            printf("seven\n");
        }
        else if (n1 == 8)
        {
            printf("eight\n");
        }
        else if (n1 == 9)
        {
            printf("nine\n");
        }
    }
    }
    // else
    // {
    //     continue;
    // }
}

void check_for_OE1(int n1)
{
    // if (n1 < 9)
    // {
    // for (int i =n1;i<=9;n1++,i++)
    // {
          if (n1 % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    // }
    // }
    // else
    // {
    //     if (n1 % 2 == 0)
    //     {
    //         printf("even\n");
    //     }
    //     else
    //     {
    //         printf("odd\n");
    //     }
    // }
     
}

void check2(int n2)
{
    if(n2<9)
    {
    for (int i =n2;i<=9;n2++,i++)
    {
         if (n2 == 1)
        {
            printf("one\n");
        }
        else if (n2== 2)
        {
            printf("two\n");
        }
        else if (n2 == 3)
        {
            printf("three\n");
        }
        else if (n2 == 4)
        {
            printf("four\n");
        }
        else if (n2 == 5)
        {
            printf("five\n");
        }
        else if (n2 == 6)
        {
            printf("six\n");
        }
        else if ( n2 == 7)
        {
            printf("seven\n");
        }
        else if (n2== 8)
        {
            printf("eight\n");
        }
        else if (n2 == 9)
        {
            printf("nine\n");
        }
    }
    }
    // else 
    // {
    //      continue;
    // }
}

void check_for_OE2(int n2)
{
    // if (n2 < 9)
    // {
    // for (int i =n2;i<=9;n2++,i++)
   // {
          if (n2 % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
   // }
    // }
    // else
    // {
    //     if (n2 % 2 == 0)
    //     {
    //         printf("even\n");
    //     }
    //     else
    //     {
    //         printf("odd\n");
    //     }
    // }
     
}

int main()
{
    int n1=3,n2=15;
    check1(n1);
    check2(n2);
    check_for_OE1(n1);
    check_for_OE2(n2);
    return 0;
}
