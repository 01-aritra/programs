//Delete any random array

#include<stdio.h>
#include<stdlib.h>

void delete_any_element(int arr[],int n,int ind)
{
    for (int i = ind; i < n-1; i++)
    {
        /* code */
        arr[i] = arr[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n = 5;
    int arr[] = { 3 , 6 , 8 , 9, 2};
    int ind = 1;

    delete_any_element(arr,n,ind);
    return 0;
}