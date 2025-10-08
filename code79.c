#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for (int s = 0; s <= rows + cols - 2; s++) {
        if (s % 2 == 0) {
            for (int i = 0; i <= s; i++) {
                int j = s - i;
                if (i < rows && j < cols)
                    printf("%d ", matrix[i][j]);
            }
        } else {
            for (int i = s; i >= 0; i--) {
                int j = s - i;
                if (i < rows && j < cols)
                    printf("%d ", matrix[i][j]);
            }
        }
    }

    printf("\n");
    return 0;
}
