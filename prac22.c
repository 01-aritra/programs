//Reverse a string in c...

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char wrd[1000];
    
    printf("Enter Sentence :");
    gets(wrd);

    printf("Entered word is :");
    printf("%s\n",wrd);

    int size =strlen(wrd);

    int i ;
    printf("Reversed Word is : \n");
    for ( i= size-1;i>= 0;i--)
    {
        printf("%c",wrd[i]);
    }
    return 0;
}