// check whether two no. not necessary to be consiquitive addition of these must be 7.

#include<stdio.h>
#include<stdlib.h>

void two_sum(int arr[],int n)
{   
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == 7)
            {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int arr[] = {6, 3, 1, 2, 8, 5, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    two_sum(arr, n);
    return 0;
}