#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    switch (n) {
        case 1:
            printf("Move disk 1 from %c to %c\n", source, destination);
            return;
        default:
            towerOfHanoi(n-1, source, auxiliary, destination);
            printf("Move disk %d from %c to %c\n", n, source, destination);
            towerOfHanoi(n-1, auxiliary, destination, source);
            return;
    }
}

int main() {
    int n = 3; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
