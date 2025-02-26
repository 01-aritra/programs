//Print the length of last word 

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void count(char *S)
{
    int length = 0; 
    int i = strlen(S)-1;

    while (i >= 0 && isspace(S[i]))
    {
        i--;
    }
     while (i >= 0 && !isspace(S[i]))
     {
        length++;
        i--;
     }
      printf("%d",length);
}

int main()
{
    char S[] = "Aritra Mishra is";
    count(S);
    return 0;
}