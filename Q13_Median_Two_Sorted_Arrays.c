#include <stdio.h>
#include <limits.h>

double findMedian(int nums1[], int m, int nums2[], int n) {
    // Binary search is performed on the smaller array.
    if (m > n)
        return findMedian(nums2, n, nums1, m);

    int low = 0, high = m;

    while (low <= high) {
        int cut1 = low + (high - low) / 2;
        int cut2 = (m + n + 1) / 2 - cut1;

        int left1  = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
        int right1 = (cut1 == m) ? INT_MAX : nums1[cut1];

        int left2  = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
        int right2 = (cut2 == n) ? INT_MAX : nums2[cut2];

        if (left1 <= right2 && left2 <= right1) {
            if ((m + n) % 2 == 0) {
                int leftMax = (left1 > left2) ? left1 : left2;
                int rightMin = (right1 < right2) ? right1 : right2;
                return ((double)leftMax + rightMin) / 2.0;
            }

            return (left1 > left2) ? left1 : left2;
        }

        if (left1 > right2)
            high = cut1 - 1;
        else
            low = cut1 + 1;
    }

    return -1.0; // Invalid input: arrays must be sorted.
}

int main() {
    int m, n;

    printf("Enter size of nums1: ");
    scanf("%d", &m);

    int nums1[m];
    printf("Enter sorted nums1: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    printf("Enter size of nums2: ");
    scanf("%d", &n);

    int nums2[n];
    printf("Enter sorted nums2: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    printf("Median = %.2f\n", findMedian(nums1, m, nums2, n));
    printf("Time Complexity: O(log(min(m, n)))\n");
    printf("Space Complexity: O(1)\n");

    return 0;
}
