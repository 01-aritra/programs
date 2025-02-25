// palendrome string

#include<stdio.h>
#include<string.h>

void main()
{
    char sen[50000];
    int leng,i,flag=0;
    printf ("Enter the string :\n");
    fgets(sen);
    leng =strlen(sen);
    for (i=0;i<leng;i++)
    {
        if (sen[i] !=sen[leng-i-1])
        {
            flag =1;
            break;
        }
    }
        if (flag == 0)
        {
            printf ("yes : it is a palendrome string.");
        }
        else
        {
           printf ("No it is not a palendrome string.");
        }
    }
