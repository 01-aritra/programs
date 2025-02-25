// Most no of character present in a string

// Input : Aritra Misha
//Output: A

#include<stdio.h>
#include<stdlib.h>

#define max_char 256

void calculate(char *input_char)
{

    int frequency[max_char] = {0};
    int sum=0;
    
    int i = 0;
    for (int i =0;input_char[i] != '\0';i++)
    {
        frequency[(int)input_char[i]]++;
    }
    
    int max_freq = 0;
    char maxCchar;
    for (i=0;i<max_char;i++)
    {
        if (frequency[i] > max_freq)
        {
            max_freq =  frequency[i];
            maxCchar=(char)i;
        }
    }
    printf(" '%c',  %d\n", maxCchar, max_freq);
}

int main()
{
    char input_char[] ="Aritra";
    calculate(input_char);
    return 0;
}