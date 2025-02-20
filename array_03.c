// Delete element from at index

#include<stdio.h>
#include<stdlib.h>

void delete_element_from_any_index(int arr[],int n,int ind)
{
    for (int i = 0; i < ind; i++)
    {
        /* code */
       printf("%d ",arr[i]);
    }
    for (int  i = ind+1; i < n; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }    
}

int main()
{
    int n = 5;
    int arr[6] = {4, 3, 2, 5, 6}; 
    int ind = 0;
    

    delete_element_from_any_index(arr,n,ind);
    return 0;
}