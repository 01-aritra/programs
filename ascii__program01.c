/* WAP to enter an ALPHABET and print it's ASCII value.

                         For Ex- A is 65 & a is 90*/



#include<stdio.h>
int main()
    {
        char ch;
        printf ("Enter the character :");
        scanf ("%c",&ch);
        printf ("The ascii value of %c is : %d",ch,ch);
        return 0;
    }

