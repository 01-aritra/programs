/*WAP in java to entre three types of string inputs in a program.
   one will show :C
   othen will show :Language
   and the third one will show :Welcome To C!!*/


   #include<stdio.h>
   int main()
   {
    char ch,num[5000],name;
    printf ("Enter your favourite character");
    scanf ("%c",&ch);
    printf ("Enter your cavourite Word!");
    scanf ("%c",&name);
    printf ("Enter sentence");
    gets(num);
    printf ("%s",ch);
    printf ("%s",name);
    printf("%s",num);
    return 0;
   }