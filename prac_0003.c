// Min Max in two array COADING QUESTION

#include<stdio.h>
#include<stdlib.h>

int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }    
}

void check(int *arr1,int *arr2,int k,int n1,int n2) {
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n1; i++)
    {
        if (arr1[i] > k)
        {
            count1 ++;
        }        
    }
    for (int j = 0; j < n2; j++)
    {
        if (arr2[j] < k)
        {
            count2 ++;
        }        
    }
    int temp = max(count1,count2);
    printf("%d",temp);
}

int main()
{
    int arr1[] = {9,16,12,5,15};
    int arr2[] = {14,7,22,5,32,77};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k = 9;

    check(arr1,arr2,k,n1,n2);
    return 0;
}