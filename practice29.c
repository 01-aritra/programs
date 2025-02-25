// calculating the length of a sentence.    ::- the sentence is user input 


#include<stdio.h>
#include<string.h>

void main()
{
    char sen[500];
    int len;
    printf ("Enter your sentence :\t");
    gets(sen);
    len =strlen(sen);
    printf ("Tne length of your sentence is %d .",len);
}