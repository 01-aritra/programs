/*merge two array sort the element using selection sort and find their median also the smallerst element 
in the array.*/

#include<stdio.h>
#include<stdlib.h>

void mgtw(int num1[],int num2[],int n1,int n2,int finarr[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (num1[i] < num2[j])
        {
            finarr[k] = num1[i];
            k++; i++;
        }
        else
        {
            finarr[k] = num2[j];
            k++; j++;
        }
    }
    while (i < n1)
    {
        finarr[k] = num1[i];
        k++; i++;
    }
    while (j < n2)
    {
        finarr[k] = num2[j];
        k++; j++;
    }
}

void display(int finarr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",finarr[i]);
    }
    printf("\n");    
}

// Sorting the element with selection sort
void selsort(int finarr[],int size)
{
    int min_ind;
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        min_ind = i;
        for(int j=i+1; j < size;j++)
        {
            if (finarr[j] < finarr[min_ind]) // change " < " || " > " for ascending or descending order.
            {
                min_ind = j;                
            }
            if (min_ind != i)
            {
                temp = finarr[min_ind];
                finarr[min_ind] = finarr[i];
                finarr[i] = temp;
            }           
        }
    }    
}

//Display the smallest element in the array
void dispsml(int finarr[],int size)
{
    int min = finarr[0];
    for (int i = 0; i < size; i++)
    {
        if (finarr[i] < min)
        {
            min = finarr[i];
        }
    }
    printf("Smallest Element in the array : %d",min);    
}

int main()
{
    int num1[] = {3,2,4,9};
    int num2[] = {1 ,5 ,6,8,7};
    int n1 = sizeof(num1)/sizeof(num1[0]);
    int n2 = sizeof(num2)/sizeof(num2[0]);
    int finarr[n1+n2];
    
    printf("The Merged Array: \n");
    mgtw(num1,num2,n1,n2,finarr);
    display(finarr,n1+n2);
    printf("After Sorting \n");
    selsort(finarr,n1+n2);
    display(finarr,n1+n2);
    dispsml(finarr,n1+n2);

    return 0;
}