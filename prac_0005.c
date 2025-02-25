#include <stdio.h>
#include <math.h>

int main() {
    long long int N;
    int dec = 0, rem, oct = 0, i = 1, power = 0;

    // Input the binary number
    scanf("%lld", &N);

    // Convert binary to decimal
    while (N != 0) {
        rem = N % 10;
        dec = dec + rem * pow(2, power);
        N = N / 10;
        power++;
    }

    // Convert decimal to octal
    while (dec != 0) {
        rem = dec % 8;
        oct = oct + (rem * i);
        dec = dec / 8;
        i = i * 10;
    }

    // Print the final octal number
    printf("%d", oct);
    
    return 0;
}
