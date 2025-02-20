// Insert element at an index

#include<stdio.h>
#include<stdlib.h>

void insert_at_anyindex(int arr[],int n, int elem,int ind)
{
    for (int i = n; i > ind; i--)
    {
        /* code */
        arr[i] = arr[i-1];
    }
    arr[ind] = elem;
    for (int i = 0; i <= n; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    // printf("\n");   
}

int main()
{
    int n = 5;
    int arr[] = { 6, 3 , 8 , 9 ,2};
    int ind = 3;
    int elem = 32;

    insert_at_anyindex(arr,n,elem,ind);
    return 0;
}
