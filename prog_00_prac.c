#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void check_max(x,y)
{
    if (x > y)
    {
        return x;
    }
    else {
        return y;
    }
    
}
void check_occurance(char* s)
{
    int count[26];
    int max = 0;
    int size = s[]/s[0];
    
    for (char c = 0; c < size; c++)
    {
        count[c-'a']++;
        max = check_max(max,count[c-'a']);
    }
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
    
}