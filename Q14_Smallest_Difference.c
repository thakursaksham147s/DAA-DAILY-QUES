#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int smallestDifference(int arr1[], int n, int arr2[], int m) {
    qsort(arr1, n, sizeof(int), compare);
    qsort(arr2, m, sizeof(int), compare);

    int i = 0, j = 0;
    int minDiff = abs(arr1[0] - arr2[0]);

    while (i < n && j < m) {
        int diff = abs(arr1[i] - arr2[j]);

        if (diff < minDiff)
            minDiff = diff;

        if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }

    return minDiff;
}

int main() {
    int n, m;

    printf("Enter size of arr1: ");
    scanf("%d", &n);

    int *arr1 = malloc(n * sizeof(int));
    printf("Enter arr1 elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of arr2: ");
    scanf("%d", &m);

    int *arr2 = malloc(m * sizeof(int));
    printf("Enter arr2 elements: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    printf("Smallest difference = %d\n",
           smallestDifference(arr1, n, arr2, m));

    printf("Time Complexity: O(n log n + m log m)\n");
    printf("Extra Space: O(log n + log m) approximately (qsort recursion)\n");

    free(arr1);
    free(arr2);

    return 0;
}
