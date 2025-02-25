#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("it's a upper case");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("it's a smaller case ");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("it's a number");
    }
    else if ((ch >= 0 && ch <= 47)  (ch >= 58 && ch <= 64)  (ch >= 91 && ch <= 96)  (ch >= 123 && ch <= 127))
    {
        printf("it's a special symbol ");
    }
    return 0;
}