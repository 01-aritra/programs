#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char target) {
    if (n > 0) {
        // Move n-1 disks from source to auxiliary peg
        towerOfHanoi(n - 1, source, target, auxiliary);

        // Move the nth disk from source to target peg
        printf("Move disk %d from %c to %c\n", n, source, target);

        // Move the n-1 disks from auxiliary to target peg
        towerOfHanoi(n - 1, auxiliary, source, target);
    }
}

int main() {
    int n = 3; // Number of disks
    char source = 'A'; // Source peg
    char auxiliary = 'B'; // Auxiliary peg
    char target = 'C'; // Target peg

    printf("Tower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, source, auxiliary, target);

    return 0;
}
