#include <stdio.h>

void spiral(int matrix[][100], int m, int n) {
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {

        // Left to right
        for (int j = left; j <= right; j++)
            printf("%d ", matrix[top][j]);
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--;

        // Right to left
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                printf("%d ", matrix[bottom][j]);
            bottom--;
        }

        // Bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }
}

int main() {
    int m, n;
    int matrix[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Spiral order: ");
    spiral(matrix, m, n);

    printf("\nTime Complexity: O(m*n)\n");
    printf("Extra Space: O(1)\n");

    return 0;
}
