#include<stdio.h>
int main()
{
    int arr[200],sz,x,flag=0;
    printf ("Enter the size of array: ");
    scanf("%d",&sz);
    int lb=0,rb =sz-1;
    printf ("Enter the elements of your array : ");
    for (int i=0;i<sz;i++)  // size will e upto the number which the user will input
    {
        scanf ("%d",&arr[i]);
    }
     printf ("Enter the element to be searched: ");
    scanf("%d",&x);  // taking the input of searching element
     for (int mid = (lb + rb) / 2; lb <= rb; mid = (lb + rb) / 2) {
        if (arr[mid] == x) {
             flag=1;  // Return the index of the found element
        } else if (arr[mid] < x) {
            lb = mid + 1;
            flag=1;
        } else {
            rb = mid - 1;
            flag=1;
        }
       
   
     if (flag != 1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index \n");
    }

    return 0;
}
}



