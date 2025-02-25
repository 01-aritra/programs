// 3rd largest element in the array

#include<stdio.h>
#include<stdlib.h>

void find_third_max(int arr[],int n)
{
    int temp;
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]<arr[j+1])
            {
                temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
}

int main()
{
    int n=5;
    int arr[5] = {5, 1, 9, 3, 17};

    find_third_max(arr,n);
    //for (int i=0;i<n;i++)
    //{
        printf("%d ",arr[2]);
        //17 > 9 > 5 > 3 > 1
    //}
    return 0;
}