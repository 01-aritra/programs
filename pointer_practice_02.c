/*Q: Write a C program that takes an array of integers and
 sorts it in ascending order using pointers. The program
  should prompt the user to enter the number of elements 
  in the array and the values of the elements,
 and then display the sorted array back to the user.*/
 
 #include <stdio.h>

void sort(int *ptr, int n);

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

    // Sort the array using pointers
    sort(arr, n);

    // Display the sorted array
    printf("\nSorted Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}

void sort(int *ptr, int n) {
    int i, j, temp;

    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(*(ptr + j) < *(ptr + i)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}
