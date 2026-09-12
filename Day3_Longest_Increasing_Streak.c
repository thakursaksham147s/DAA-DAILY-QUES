#include <stdio.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int current = 1;
    int longest = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1])
            current++;
        else
            current = 1;

        if (current > longest)
            longest = current;
    }

    printf("Longest increasing streak = %d\n", longest);
    printf("Time Complexity: O(n)\n");
    printf("Space Complexity: O(1)\n");

    return 0;
}
