#include <stdio.h>

int main() {
    unsigned int n;

    printf("Enter a positive integer containing 9 digits: ");
    scanf("%u", &n);

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    // Sum of digits 0 through 9 = 45.
    int missing = 45 - sum;

    printf("Missing digit = %d\n", missing);
    printf("Time Complexity: O(log n)\n");
    printf("Space Complexity: O(1)\n");

    return 0;
}
