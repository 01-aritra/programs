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