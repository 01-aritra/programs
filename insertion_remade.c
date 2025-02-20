// Sort the array using insertion sort teachnique

#include<stdio.h>
#include<stdlib.h>

void insertion(int arr[])
{
    int temp; // temporary variable for sorting 
    //int sz = sizeof(arr)/sizeof(arr[0]);
    int sz = 5;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j-1])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp; 
            }
        }
    }    
}

int main()
{
    int arr[] = {3,7,4,1,9};

    insertion(arr);
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d ", arr[i]);

    }
    return 0;
}