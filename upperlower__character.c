/* WAP to enter a character and if it is in uppercase convert it into lowercase and vice versa. */

#include<stdio.h>
int main()
{
    char ch;
    printf ("Enter Character:  ");
    scanf ("%c",&ch);
    if ((ch>='A')&&(ch<='Z'))
    {
        ch=ch+32;
        printf ("the character is : %c",ch);
    }
    else
    {
        ch=ch-32;
        printf ("The character is : %c",ch);
    }
    return 0;
}