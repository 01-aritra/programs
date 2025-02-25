// Sort the elements of the array using selection sort teachnique

#include<stdio.h>
#include<stdlib.h>

void selection(int arr[], int n) 
{
    int min;
    int temp;
    for (int i = 0; i < n - 1; i++) 
    {
        min = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min]) 
            {
                min = j;
            }
        }
        if (min != i) 
        {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n = 7;
    int arr[] = {2, 5, 3, 1, 8, 6, 9};

    selection(arr, n);
    display(arr, n);
    return 0;
}
