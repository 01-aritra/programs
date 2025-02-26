#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    switch (n) {
        case 1:
            cout << "Move disk 1 from " << source << " to " << destination << endl;
            return;
        case 2:
            cout << "Move disk 1 from " << source << " to " << auxiliary << endl;
            cout << "Move disk 2 from " << source << " to " << destination << endl;
            cout << "Move disk 1 from " << auxiliary << " to " << destination << endl;
            return;
        default:
            towerOfHanoi(n-1, source, auxiliary, destination);
            cout << "Move disk " << n << " from " << source << " to " << destination << endl;
            towerOfHanoi(n-1, auxiliary, destination, source);
            return;
    }
}

int main() {
    int n = 3; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
