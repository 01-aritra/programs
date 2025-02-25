//  Shot the element in descending order using selection shot teanique.  



#include <stdio.h>

int main() {
    int arr[5];
    int i, j, temp, max_index;

    // take input from the user and store in the array
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // sort the array in descending order using selection sort algorithm
    for (i = 0; i < 5; i++) {
        max_index = i;
        for (j = i+1; j < 5; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        // swap the elements at i and max_index
        temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }

    // print the sorted array
    printf("The numbers in descending order are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
