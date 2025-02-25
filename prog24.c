//  comparing two strings and finding the longest substring

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void check_for_longest_substring(char *arr1,char * arr2)
{
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    
    

    // Allocating memory dynamically to 'dp' (len1 +1) * (len2 +1)
    int **dp = (int **)malloc((len1 +1)* sizeof(int *));
    for (int i = 0; i <= len1; i++)
    {
        dp[i] = (int *)malloc((len2+1) *sizeof(int *));
    }
    
    int max = 0;  // count the length of the longest substring
    int endpos = 0; // Track the ending position of the array
    

    // initialize the ap array to 0
    
    for (int i = 0;i <= len1 ; i++ )
    {
        for (int j = 0; j <= len2; j++)
        {
            dp[i][j] = 0;
        }
    }
    // applying lcs algo to check for longest algorithm

    for (int i = 0;i <= len1;i++)
    {
        for (int j = 0 ; j <= len2 ; j ++ )
        {
            if (arr1[i-1] == arr2[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
                max= dp[i][j];
                endpos = 1; // updating the end position of an array
            }
        }
    }

    printf("Length of the longest common substring is : %d",max);
//Extract and print the longest common subsequence

if (max > 0)
{
    char *longsubstring = (char *)malloc((max + 1) *sizeof (char));
    strncpy(longsubstring,arr1 + endpos -max,max);
    longsubstring[max] = '\0';
    printf("\nLongest common substring : %s",longsubstring);
    free(longsubstring);
}

//free the allocated memory

for (int i = 0; i <= len1; i++)
{
    free(dp[i]);
}
free(dp);

}

int main()
{
    char arr1[]= "apple";
    char arr2[]="mapple";

    check_for_longest_substring(arr1,arr2);
    return 0;
}


    