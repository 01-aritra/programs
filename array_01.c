#include<stdio.h>
#include<stdlib.h>

void insert_at_front(int arr[], int n, int key)
{
    // Shift all elements to the right by one position
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    // Insert the new element at the front
    arr[0] = key;

    // Print the array after insertion
    printf("After value insertion:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n = 5;
    int arr[6] = {4, 3, 2, 5, 6}; // Increase size to accommodate new element
    int key = 8;

    insert_at_front(arr, n, key);
    return 0;
}
