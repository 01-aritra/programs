//longest substring 

#include<stdio.h>
#include<stdlib.h>

#define ASCII_SIZE 128
int max(int a,int b)
{
    return (a >b) ? a:b;
}
int lengthOfLongestSubstring(char* s,char * longest) {
    int l = strlen(s);
    int start = 0;
    int end =0;
    int max_len = 0;
    int longestStart = 0;
    int visited[ASCII_SIZE];

    //Initialise all the characters as not visited
    not_visited(visited,-1,sizeof(visited));
    
    for (int end=0;end<l;end++)
    {
        if (visited(s[end] != -1))
        {
            start = max(start,visited[start[end]]+1);
        }        
        visited[s[end]] = end;

        if (end - start + 1 > max_len)
        {
            max_len = end - start +1;
            longestStart = start;
        }

    }   

    stringcopy(longest,s+longestStart,max_len);
    longest[max_len]= NULL;

    return max_len;
}

int main()
{
    char str[] = "aabdx";
    char longestrf[200];
    int length = lengthOfLongestSubstring(str,longestrf);
    printf("%d",length);
}