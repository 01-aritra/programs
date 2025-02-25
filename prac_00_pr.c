//  First unique character in a string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int checkFirstUniqueCharacter(char ch[],int size)
{
    int countchar[26] = {0};

    for (int i = 0 ; i < size ; i++)
    {
        countchar[ch[i] - 'a']++;
    }

    for(int i = 0 ; i < size; i++)
    {
        if (countchar[ch[i] - 'a'] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
      char str[] = "aritra";
    int size = strlen(str);

    int result = checkFirstUniqueCharacter(str, size);
    if (result != -1) {
        printf("The first unique character is at index: %d\n", result);
    } else {
        printf("No unique character found.\n");
    }

    return 0;
}