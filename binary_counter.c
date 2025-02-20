#include <stdio.h>

void binarycounter(int A[], int size, int n) 
{
    for (int j = 0; j < n; j++) 
    {
        for (int i = size - 1; i >= 0; i--)
         {
            if (A[i] == 0)
            {
                A[i] = 1;
                break;
            } else
            {
                A[i] = 0;
            }
        }
    }
}

void display(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", A[i]);
    }
    printf("\n");
}

// int main() {
//     int a[4] = {0, 0, 0, 1};
//     int size = sizeof(a) / sizeof(a[0]);
//     int increments = 1; // Change this value as needed
//     binarycounter(a, size, increments);
//     display(a, size);
//     return 0;
// }


int main()
{
    int n=4;
    int A[n],increment = 1;  // use increment accordingly...
    printf("Enter the array : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    binarycounter(A, n, increment);
    display(a, n);
    return 0;
}


