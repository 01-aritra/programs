// check for a given word is palindrome or not

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void palin_str(char * ch)
{
    int len = strlen(ch);
    int is_palindrome = 1; // if the string comes out to br palindromic
    for (int i = 0; i < len/2; i++)
    {
        if (ch[i] != ch[len-i-1])
        {
            is_palindrome = 0;
            break;
        }        
    }

    if (is_palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }   
}

int main()
{
    char ch[] = "ariitra";
    palin_str(ch);
    return 0;
}