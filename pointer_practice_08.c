/*Q: Write a C program that uses pointers to find the sum and average of elements in
 an array of integers entered by the user. The program should prompt the user to enter 
 the number of elements in the array, the elements of the array, 
and then display the sum and average of the elements back to the 
user using pointers.*/
#include <stdio.h>

int main() {
    int n, i, arr[100], sum = 0;
    float avg;
    int *ptr;

    // Prompt the user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Prompt the user for the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Point the pointer to the array
    ptr = arr;

    // Calculate the sum of the elements using pointers
    for (i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    // Calculate the average of the elements using pointers
    avg = (float)sum / n;

    // Display the sum and average of the elements
    printf("\nSum of the elements: %d\n", sum);
    printf("Average of the elements: %.2f\n", avg);

    return 0;
}
