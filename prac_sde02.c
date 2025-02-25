//Closest Palindrome Number (absolute difference Is min)

/*Examples: 

Input :
  N = 121 
Output :
 131 or 111   

Explanation:
 Both having equal absolute difference
with the given number.
Input :
 N = 1234
Output :
 1221*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int min(int a,int b) {
    return (a < b) ? a : b;
}

bool check_palin(int k) {
    int num = k, rev = 0;
    while (k > 0)
    {
        int rem = k % 10;
        rev = rev * 10 + rem;
        k = k / 10;
    }
    return num == rev;
}


int find_clspld(int n) {
    int num1 = n, num2 = n;
    int count1 = 0, count2 = 0;
    int k1 , k2;
    for (int i = num1 - 1; i <= num1; i--)
    {
        if (check_palin(i))
        {
            k1 = i;
            break;
        }
        else {
            count1++;
        }
    }
    
    for (int i = num2 + 1; i >= num1; i++)
    {
        if (check_palin(i))
        {
            k2 = i;
            break;
        }
        else {
            count2++;
        }
    }

    if (count1 < count2)
    {
        return k1;
    }
    else
    {
        return k2;
    }    
}

int main() {
    int n = 122;

    int p = find_clspld(n);
    printf("%d",p);
    return 0;
}