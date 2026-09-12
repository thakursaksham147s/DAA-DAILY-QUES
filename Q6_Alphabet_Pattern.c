#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", 'A' + i + j);
        }
        printf("\n");
    }

    printf("\nTime Complexity: O(n^2)\n");
    printf("Space Complexity: O(1)\n");

    return 0;
}
