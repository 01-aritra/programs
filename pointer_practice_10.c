/*Q: Write a C program that uses pointers to swap the values
 of two variables entered by the user. The program should prompt
  the user to enter the values of two variables, swap the values of 
  the variables using pointers, 
and then display the swapped values back to the user.*/

#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int a, b;

    // Prompt the user for the values of two variables
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Swap the values of the variables using pointers
    swap(&a, &b);

    // Display the swapped values of the variables
    printf("\nSwapped values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

void swap(int *a, int *b) {
    int temp;

    // Swap the values of the variables using pointers
    temp = *a;
    *a = *b;
    *b = temp;
}
