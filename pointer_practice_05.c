/* Q: Write a C program that uses pointers to find the 
maximum value in an array of integers. The program should 
prompt the user to enter the number of elements in the array 
and the values of the elements, 
and then display the maximum value back to the user.*/

#include <stdio.h>

int max(int *ptr, int n);

int main() {
    int n, i;
    int arr[50];

    // Prompt the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Prompt the user for the values of the elements
    printf("Enter the values of the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    // Find the maximum value in the array using pointers
    int max_val = max(arr, n);

    // Display the maximum value
    printf("\nMaximum Value: %d\n", max_val);

    return 0;
}

int max(int *ptr, int n) {
    int max_val = *ptr;
    int i;

    for(i = 1; i < n; i++) {
        if(*(ptr + i) > max_val) {
            max_val = *(ptr + i);
        }
    }

    return max_val;
}
