// check for ascii

#include<stdio.h>
#include<stdlib.h>


void check(char ch)
{
    if (ch >= 65 && ch <= 90)
    {
        printf("%c",ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c",ch);
    }
    else if (ch >= 48 && ch <= 57) 
    {
        printf("%c",ch);
    }
    else if ((ch >= 0 && ch <= 48) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
    {
        printf("%c",ch);
    }
    else
    {
        printf("Character not found");
    }    
}

int main()
{
    char ch = 92;
    check(ch);
    return 0;
}