//Maximum Product Subarray
#include<stdio.h>
#include<stdlib.h>

int max (int a,int b) {
    return (a > b) ? a : b;
}

int find_maxi(int arr[],int n) {
     int maxp = arr[0];
     int curr = 1;
     for (int i = 0; i < n; i++)
     {
        curr *= arr[i]; 
        maxp = max(curr,maxp);
        if (curr == 0)
        {
            curr = 1;
        }
     }
     
     curr = 1;
    for (int i = n; i >= 0; i--)
    {
        curr = curr * arr[i];
        maxp = max(curr,maxp);
        if (curr == 0)
        {
            curr = 1;
        } 
    }
    return maxp;
}

int main()
{
    int arr[] = {-2,6,-3,-10,0,2};
    int n = 6;

    int ans = find_maxi(arr,n);
    printf("%d",ans);
    return 0;
}