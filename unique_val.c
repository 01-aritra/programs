//finding the unique element in the array

#include<stdio.h>
#include<stdlib.h>

void find_unique(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1; // like values will be marked as -1 so that we can print the remaining unlike value
            }            
        }        
    }

    if (size == 0)
    {
        printf("No unique value in the array");
        return;
    }
    

    int unique_val =0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            unique_val = arr[i];
        }
    }
    
    printf("Unique Value in the array is %d",unique_val);
}

int main()
{
    int arr[] =  { 3,4,1,3,4};
    int size = 5;
    find_unique(arr,size);
    return 0;
}