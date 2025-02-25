// shorted in ascending order using bublle shot teanique.



#include <stdio.h>

int main() {
    int arr[5];
    int i, j, temp;

    // take input from the user and store in the array
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // sort the array in ascending order using bubble sort algorithm
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5 - i - 1; j++)
         {
            if (arr[j] > arr[j+1]) {
                // swap elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // print the sorted array
    printf("The numbers in ascending order are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
