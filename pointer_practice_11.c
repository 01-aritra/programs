/*Write a C program that uses pointers to compute the sum and average of an array of integers entered 
by the user. The program should prompt the user to enter the size of the array and the elements of the array, 
compute the sum and average of the array using pointers, and then display the sum and average back to the user.*/
#include <stdio.h>

void calculate_sum_and_average(int *arr, int size, int *sum, float *average);

int main() {
    int size, arr[100], sum;
    float average;

    // Prompt the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Prompt the user for the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute the sum and average of the array using pointers
    calculate_sum_and_average(arr, size, &sum, &average);

    // Display the sum and average of the array
    printf("\nSum of the array: %d\n", sum);
    printf("Average of the array: %.2f\n", average);

    return 0;
}

void calculate_sum_and_average(int *arr, int size, int *sum, float *average) {
    int i;

    // Compute the sum of the array using pointers
    *sum = 0;
    for (i = 0; i < size; i++) {
        *sum += *(arr + i);
    }

    // Compute the average of the array using pointers
    *average = (float) *sum / size;
}

