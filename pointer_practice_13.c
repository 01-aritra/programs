/*Write a C program that reads an array of integers from the user and then finds the sum and average 
of the elements in the array using pointers. The program should prompt the user to enter the number of 
elements in the array, read the elements into an array using pointers, compute the sum and average of the 
elements using pointers, and then display the sum and average back to the user.*/

#include<stdio.h>
#include<stdlib.h>

void sumandavg(int *arr, int *n, int *sum, float *avg)
{
    *sum = 0;
    for (int i = 0; i < *n; i++) 
    {
        *sum += *(arr + i);
    }  
    *avg = (float)*sum / *n;
    printf("Sum: %d\n", *sum);
    printf("Average: %.2f\n", *avg); 
}

int main() {
    int n, arr[100], sum;
    float average;

    // Prompt the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Prompt the user for the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute the sum and average of the array using pointers
    sumandavg(arr, &n, &sum, &average);

    return 0;
}
