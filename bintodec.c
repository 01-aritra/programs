//Binary number to decimal number:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void convert(char * a)
{
    int i = 0;
    int dec_no = 0;
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        if (a[i] == '1')
        {
            dec_no =dec_no + pow(2,len - i - 1);
        }   
    }
    
    printf("%d",dec_no);
}

int main()
{
    char num[] ="1001";
    convert(num);
    return 0;
}