#include <stdio.h>

// Function prototype for Tower of Hanoi
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod);

// Tower of Hanoi function implementation
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    // Move top n-1 disks from A to B using C as auxiliary
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);

    // Move nth disk from A to C
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);

    // Move n-1 disks from B to C using A as auxiliary
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

// Main function to test Tower of Hanoi function
int main() {
    int n = 4; // Number of disks
    printf("Tower of Hanoi solution for %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}
