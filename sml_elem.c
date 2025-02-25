//Check the smallest element in the array

#include<stdio.h>
#include<stdlib.h>

void find_smt(int arr[],int size)
{
    int min = arr[0];
    for (int i = 0; i< size; i++)
     {
        if (arr[i] < min)
        {
            min = arr[i];
        }
     }
     printf("Minimum : %d",min);
}

int main()
{
    int n = 5;
    int arr[] = { 3,2,9,1,6};
    find_smt(arr,n);
    return 0;
}