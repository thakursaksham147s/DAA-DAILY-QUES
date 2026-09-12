#include <stdio.h>

int main() {
    int n, target;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                printf("[%d, %d]\n", i, j);
                printf("Time Complexity: O(n^2)\n");
                printf("Space Complexity: O(1)\n");
                return 0;
            }
        }
    }

    printf("No valid pair found.\n");
    printf("Time Complexity: O(n^2)\n");
    printf("Space Complexity: O(1)\n");

    return 0;
}
