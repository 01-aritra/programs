#include<iostream>
#include<string>
using namespace std;


class kmp
{
    void computeprefix(string pattern,int lps[],int m)
    {
        int i = 1;
        int len =0;
        while (i < m)
        {
            if (pattern[len] == pattern[i]) 
            {
                lps[i] = len + 1;
                len++;
                i = i + 1;
            }
            else if (len != 0)
            {
                len = lps[len-1];
            }
            else 
            {
                lps[i] = 0;
                i = i + 1;
            }
        }
    }

    void computeKMP(string text,string pattern)
    {
        int n,m,count = 0;
        n = text.length();
        m = pattern.length();
        int i = 0, j= 0;
        int *lps= new int[m];
        lps[0] = 0;
        computeprefix(pattern,lps,m);
        while (i < n)
        {
            if (text[i] == pattern[j])
            {
                i++ ;
                j++ ;
            }
            else if (j != 0)
            {
                j = lps[ j - 1];
            }
            else
            {
                i++;
            }
            if (j == m)
            {
                cout << "PATTERN FOUND AT INDEX: "<< i - j << "" << endl;
                count++;
                j= lps[j-1];
            }
        }
    }
};

int main()
{
    string text = "onionspl";
    string pattern = "spl";
    kmp ob;
    ob.computeKMP(text,pattern);
    return 0;
}