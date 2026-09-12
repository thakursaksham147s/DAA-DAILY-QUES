#include <stdio.h>

void sortedSquares(int arr[], int n, int result[]) {
    int left = 0;
    int right = n - 1;

    // Fill result from largest square to smallest.
    for (int i = n - 1; i >= 0; i--) {
        int leftSquare = arr[left] * arr[left];
        int rightSquare = arr[right] * arr[right];

        if (leftSquare > rightSquare) {
            result[i] = leftSquare;
            left++;
        } else {
            result[i] = rightSquare;
            right--;
        }
    }
}

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sortedSquares(arr, n, result);

    printf("Sorted squares: ");
    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    printf("\nTime Complexity: O(n)\n");
    printf("Extra Space: O(n) for output array\n");

    return 0;
}
