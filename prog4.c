// Program to check the frequency of string in  a character. (in c)

#include<stdio.h>
#include<stdlib.h>


int main()
{
    char st[50],c;
    int count =0;

    printf("Enter the string: ");
    gets(st);

    for (c= 'a';c<='z';c++)
    {
        count =0;
        for(int i=0;st[i]!=NULL;i++)
        {
            if (c == st[i])
            count ++;
        }
        if(count > 0)
        printf("%c found in %d",c,count);
    }
    return 0;
}