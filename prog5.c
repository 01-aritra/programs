//  Print the sum of the integer present on the string...

// eg : -Input: aritra001
//       Output: 1         


#include <stdio.h>
#include <stdlib.h>

int addInteger(char *suin)
{
    int sum = 0;
    int i = 0;  
    while (suin[i] != '\0')
    {
        if (suin[i] >= '0' && suin[i] <= '9') 
        {
            sum += (suin[i] - '0');
        }
        i++;  
    }
    return sum;
}

int main()
{
    char suin[] = "aritra7 mishra1";
    int result = addInteger(suin);
    printf("Sum of integers in the string: %d\n", result);
    return 0;
}
