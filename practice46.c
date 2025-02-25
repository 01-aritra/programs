/*


Sure, here's another coding question:

Write a C program that accepts an integer array of size n and prints out the array in reverse order using pointers. You are not allowed to use the square bracket notation [] to access the array elements.

For example, if the input array is [1, 2, 3, 4, 5], the program should output: 5 4 3 2 1





*/

#include<stdio.h>

int main()
{
    int arr[50],i,n;
    printf("Enter no of arrays to be taken input");
    scanf("%d",&n);
    printf("Enter array to display in reverse order");
    {
        for (i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=n;i>=1;i--)
        {
            printf("%d ",arr[i]);
        }
        return 0;
    }
}
