//  Program to remove duplicate elements in an array


#include <stdio.h>
#include <stdlib.h>

void remove_duplicate(int *arr, int *n) {
    int index = 1;
    for (int i = 1; i < *n; i++) {
        int j;
        for (j = 0; j < index; ++j) {
            if (arr[i] == arr[j])
                break;
        }
        if (j == index) {
            arr[index] = arr[i];
            ++index;
        }
    }
    *n = index;
}

void printarray(int *arr, int n) {
    printf("The Required array : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n = 5;
    int arr[] = {3, 1, 6, 6, 2};

    printarray(arr, n);

    remove_duplicate(arr, &n);

    printarray(arr, n);
    return 0;
}
