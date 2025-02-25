// check prime no in a given set of number

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


// #define N 10;

// int finding_max_no_in_arr(int arr[N])
// {
//     int i;
//     int max = arr[1];
//     for (i = 0; i <= 10; i++)
//     {
//         if (arr[i] > max)
//         max = arr[i];
//     }
//     return max;
// }

bool prime_no(int num)
{
    if (num <= 1)
    {
        return false;
    }
     if (num == 2) {
        return true;
    }
     if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


void check_for_prime_no(int arr[], int size) {
    printf("Prime numbers in the array: ");
    for (int i = 0; i < size; i++) {
        if (prime_no(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int arr[] = {12,5,61,91,46,3,8,90,42};
    int size = 10;
    check_for_prime_no(arr,size);
    return 0;
}