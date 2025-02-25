//Find a subarray in the array in which the sum of first and third is equal to their middle.

#include<stdio.h>
#include<stdlib.h>

void find_subarray(int arr[],int n)
{
    int i;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            if ((arr[i] + arr[i+2]) == arr[j])
            {
                printf("%d %d %d",arr[i] , arr[j],  arr[i+2]);
                break;
            }            
        }
    }        
}

int main() {
    int arr[] = {1,3,2,5,6,7};
    int n = 6;

    find_subarray(arr,n);
    return 0;
}