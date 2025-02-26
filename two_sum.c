#include<stdio.h>
#include<stdlib.h>

void two_sum(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        sum = arr[i] + arr[i+1];
        if(sum == 7)
        {
            printf("The pairs are: ");
            printf("%d %d  \n",arr[i],arr[i+1]);
        }          
    }    
}

int main()
{
    int n = 7;
    int arr[] = {2,4,3,4,3,9,4};
    two_sum(arr,n);
    return 0;
}