#include <stdio.h>

int main() {
    int n, symmetric = 1;
    scanf("%d %d", &n, &n); // square matrix
    int matrix[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
