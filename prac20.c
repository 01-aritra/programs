// Printing a certain character in a word and finding it's frequency

// Enter : "User Input :-" Hellow Word
// User input : U
// Output : NOT Found

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char wd[1000];
    printf("Enter String... :");
    fgets(wd,sizeof(wd),stdin);

    printf("Entered word is : ");
    printf("%s",wd);

    int i = 0;
    int count = 0;
    while(wd[i] != '\0')
    {
        if (wd[i] == 'O'|| wd[i] == 'o')
        {
            count ++;
        }
        i++;
    }
    
    printf("O appears %d times: ",count);

    return 0;
}