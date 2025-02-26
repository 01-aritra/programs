#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char target) {
    int total_moves = (1 << n) - 1; // Total number of moves required

    for (int i = 1; i <= total_moves; i++) {
        // Determine the source, auxiliary, and target pegs based on the binary representation of i
        int from = (i & i - 1) % 3;
        int to = ((i | i - 1) + 1) % 3;

        char source_peg, auxiliary_peg, target_peg;

        switch (from) {
            case 0:
                source_peg = source;
                break;
            case 1:
                source_peg = auxiliary;
                break;
            case 2:
                source_peg = target;
                break;
        }

        switch (to) {
            case 0:
                target_peg = source;
                break;
            case 1:
                target_peg = auxiliary;
                break;
            case 2:
                target_peg = target;
                break;
        }

        printf("Move disk %d from %c to %c\n", n - (i & i - 1) / (i & i - 1), source_peg, target_peg);
    }
}


int main() {
    int n = 3; //    Number of disks

    printf("Tower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
