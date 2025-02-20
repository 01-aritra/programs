// program to sort the following elements using bubble sort teachnique...

#include<stdio.h>
#include<stdlib.h>

//   elements

//  15 16 6 8 5
// Basic Principle : Two simultaneously elements will be compared if they are sorted fine , otherwise it will move.

void bubble(int arr[],int n)
{
    int i,j;
    int temp;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
           
        }
        printf("%d  ",arr[j]);
    }
}

int main()
{
    int n=5;
    // printf("Enter the value of n");
    //scanf("%d",&n);
    int arr[5] = {5, 1, 9, 3, 17};
    bubble(arr,n);
    return 0;
}