#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1;
        int denominator = numerator + 1;
        sum += (double)numerator / denominator;
    }

    printf("Approximate sum: %.1lf\n", sum);

    return 0;
}
