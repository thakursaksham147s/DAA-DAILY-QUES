#include <stdio.h>

int singleElement(int nums[], int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        // Make mid even so we compare a pair (mid, mid+1).
        if (mid % 2 == 1)
            mid--;

        if (nums[mid] == nums[mid + 1])
            low = mid + 2;
        else
            high = mid;
    }

    return nums[low];
}

int main() {
    int n;

    printf("Enter size of sorted array (odd): ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Single element = %d\n", singleElement(nums, n));
    printf("Time Complexity: O(log n)\n");
    printf("Space Complexity: O(1)\n");

    return 0;
}
