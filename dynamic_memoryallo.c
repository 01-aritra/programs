//  dynamically memory allocation .
#include<stdio.h>
#include<stdlib.h>

int main()
{
// using malloc function to allocate memory dynamically.

int* ptr;
ptr = (int*)malloc(10*sizeof(int));
printf("%d",ptr);
return 0;
}