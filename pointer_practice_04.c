/*Q: Write a C program that uses pointers to swap the values of two variables
 entered by the user. The program should prompt the user to enter two 
 integers, swap their values using pointers, and then display the swapped 
 values back to the user.*/
 
 #include <stdio.h>

void swap(int *ptr1, int *ptr2);

int main() {
    int num1, num2;

    // Prompt the user for two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Swap the values using pointers
    swap(&num1, &num2);

    // Display the swapped values
    printf("\nSwapped Values:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}

void swap(int *ptr1, int *ptr2) {
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
