/*Q: Any character is input through the Key board, WAP to determine whether the character  
entered is a capital letter, a small letter, a digit or a special symbol.

The following are:

       ||CHARACTERS||            ||ASCII Values||
       
             A - Z                 65-90
             a - z                 97-122
             0 - 9                 48-57
     a special character           0-47,58-64,91-96,123-127.
           
*/

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





#include<stdio.h>
#include<math.h>

void main()
{
    char i;
    printf ("EnterASCII value\n");
      scanf ("%c",&i);
    if (i>=65 && i<=90)
    {
        printf("capital letter :%d",i);
    }
    else if (i>=97&&i<=122)
    {
        printf ("Small letter :%d",i);
    }
    else if (i>=48&&i<=57)
    {
        printf ("numbers :%d",i);
    }
    else if ((i>=0 && i<=47) || (i>=58 && i<=64) || (i>=91 && i<=96) || (i>=123 && i<=127))
    {
        printf ("Sprcial symbols :%d",i);
    }
    else
    {
       printf ("Did not match any criteria\n");
   }
}