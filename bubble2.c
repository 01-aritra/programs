#include <stdio.h>
#include <stdlib.h>

void bubble_modified(int arr[], int n) {
    int temp;  // temporary variable for sorting
    int already_sorted;

    // Loop traversing up to the second last element
    for (int i = 0; i < n - 1; i++) {
        already_sorted = 1;

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {  // Changed to ascending order sort
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                already_sorted = 0;
            }
        }

        if (already_sorted) {
            break;
        }
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entered Array: ");
    printarray(arr, n);

    bubble_modified(arr, n);

    printf("Sorted Array: ");
    printarray(arr, n);

    return 0;
}
