#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int odd = 1; // first odd number

    for (int i = 1; i <= n; i++) {
        sum += odd;
        odd += 2; // move to next odd number
    }

    printf("%d\n", sum);

    return 0;
}
