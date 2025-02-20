// add two binary number :

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

char * convert(char *a,char *b)
{
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = (lenA > lenB ? lenA : lenB) + 1; // +1 for possible carry
    char * result =(char*)malloc(maxLen+1);

    if (!result)
    {
        printf("Memory allocation Failed\n");
        exit(1);
    }

    int carry = 0;
    int i = lenA - 1;
    int j = lenB - 1;
    int k = maxLen - 1;
    
    result[maxLen] = '\0'; // Null terminates the result string

    while (i >= 0|| j >= 0||carry)
    {
        int bitA = (i >= 0) ? a[i] - '0' : 0;
        int bitB = (j >= 0) ? b[j] - '0' : 0;

        int sum = bitA + bitB + carry;
        carry = sum / 2;
        result[k--] = (sum % 2) + '0';

        i--;
        j--;
    }


    if (k >= 0)
    {
        memmove(result,result+k+1,maxLen-1);
    }
    else
    {
        memmove(result,result+1,maxLen);
    }

    return result; 

}

int main()
{
    char binary1[33], binary2[33];

    printf("Enter first binary number :");
    scanf("%s",binary1);

    printf("Enter second binary number : ");
    scanf("%s",binary2);

    char * result = convert(binary1,binary2);
    printf("Sum in binary : %s\n",result);

    free(result);
    return 0;
}