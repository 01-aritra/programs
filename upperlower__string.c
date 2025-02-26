/*WAP to enter a string and convert it to upper case and vice versa.
                   
                    For Eg- INPUT : ARitra misHRA
                           OUTPUT : arITRA MIShra*/


#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char ch[500];
 //printf ("Enter string : ");
 //scanf ("%c",&ch);   
 printf ("Enter String :");
gets(ch);
for (i=0;ch[i]!='\0';i++)
{
if ((ch[i]>='A')&&(ch[i]<='Z'))
{
    ch[i]=ch[i]+32;
printf (" The  Uppercase of the string is : %s",ch);
}
else
{
ch[i]=ch[i]-32;
printf (" The Lower case string is : %d",ch);
}

}
}