#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator, denominator;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    numerator = 2;
    denominator = 3;

    for (int i = 0; i < n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Approximate sum: %.2lf\n", sum);

    return 0;
}
