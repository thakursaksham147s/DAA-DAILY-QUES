#include <stdio.h>

int main() {
    unsigned int n;

    printf("Enter a positive integer: ");
    scanf("%u", &n);

    if (n == 0) {
        printf("Number of 1s = 0\n");
        printf("Number of 0s = 1\n");
        printf("Longest consecutive 1s = 0\n");
        return 0;
    }

    int ones = 0, zeros = 0;
    int currentOnes = 0, maxOnes = 0;

    while (n > 0) {
        if (n & 1U) {
            ones++;
            currentOnes++;

            if (currentOnes > maxOnes)
                maxOnes = currentOnes;
        } else {
            zeros++;
            currentOnes = 0;
        }

        n >>= 1;
    }

    printf("Number of 1s = %d\n", ones);
    printf("Number of 0s = %d\n", zeros);
    printf("Longest consecutive 1s = %d\n", maxOnes);

    printf("Time Complexity: O(log n)\n");
    printf("Space Complexity: O(1)\n");

    return 0;
}
