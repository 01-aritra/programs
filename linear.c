 #include <stdio.h>
int main()
{
int sz,x,arr[50],i,flag=0;  // taking the necessary elements as input
printf ("Enter the size of the array || length of your array: ");
scanf("%d",&sz);
printf ("Enter the elements of your array");
for (i=0;i<=sz;i++)
{
    scanf("%d ",&arr[i]);
}
printf ("Enter element to be searched: ");
scanf("%d",&x);  // taking the element which the user will search.
  for (int i = 0; i <=sz; i++) {
        if (arr[i] == x) {
            flag=1;  // 
        }
    
     if (flag != 1) 
     {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", i);
    }

    return 0;
}
}



   
