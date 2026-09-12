#include <stdio.h>

/*
Q12: Remove Duplicates from Sorted Array

Given a sorted array, remove duplicates in-place so that each
unique element appears only once.

Example:
Input  : 5 5 7 8 8 9 9 10 10
Output : 5 7 8 9 10
Unique elements = 5
*/

int removeDuplicates(int arr[], int n) {
    if (n == 0)
        return 0;

    int k = 1;  // Position for the next unique element

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[k - 1]) {
            arr[k] = arr[i];
            k++;
        }
    }

    return k;
}

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int k = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++)
        printf("%d ", arr[i]);

    printf("\nNumber of unique elements = %d\n", k);
    printf("Time Complexity: O(n)\n");
    printf("Space Complexity: O(1)\n");

    return 0;
}
