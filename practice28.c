#include<stdio.h>
#include<string.h>
void main()
{
    char ch[600];
    int len,i;
    printf ("Enter string :");
    gets (ch);
    len =  strlen(ch);
    for (i=0;i<=len;i++)
    {
        if (ch[i]=ch[len-i-1])
        
            printf ("It is a palendrome string.");
        
        else
        
           printf ("It is not a palendrome string");
        
    }
}