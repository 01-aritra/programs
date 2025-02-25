/*Write a C program that accepts a positive integer n and prints the first n prime numbers.

For example, if n is 5, the program should output "2 3 5 7 11".

How would you approach this problem?*/


#include <stdio.h>

int main() {
    int n, i, j, is_prime;

    printf("Enter n: ");
    scanf("%d", &n);

    // Print the first n prime numbers
    for (i = 2; i <= n; ) {
        is_prime = 1;
        // Check if i is a prime number
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
            i++;
        }
        else {
            i++;
        }
    }

    return 0;
}
