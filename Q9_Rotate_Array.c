#include <stdio.h>

/*
Q9: Rotate Array

Rotate an array to the RIGHT by k positions.

Example:
Input : 1 2 3 4 5 6 7
k = 3

Output: 5 6 7 1 2 3 4

Uses the reversal algorithm:
1. Reverse the entire array.
2. Reverse the first k elements.
3. Reverse the remaining elements.
*/

void reverse(int arr[], int left, int right) {
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

void rotateArray(int arr[], int n, int k) {
    if (n == 0)
        return;

    k = k % n;

    if (k == 0)
        return;

    // Step 1: Reverse entire array
    reverse(arr, 0, n - 1);

    // Step 2: Reverse first k elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    rotateArray(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nTime Complexity: O(n)\n");
    printf("Space Complexity: O(1)\n");

    return 0;
}
