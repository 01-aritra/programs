//Display the name of the digits

// Sample i/p = 33;
// o/p = three three

#include<stdio.h>
#include<stdlib.h>

void sayDig(int n,char *arr[])
{

    // base case
    if (n == 0)
    {
        return;
    }

    int dig = n % 10;
    n = n / 10;

    //recursive call
    sayDig(n,arr);

    printf("%s ",arr[dig]);
    
}

int main()
{
    char* arr[]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    

    int num;
    scanf("%d",&num);

    sayDig(num,arr);
    printf("\n");
    return 0;
}