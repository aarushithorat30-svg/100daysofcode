#include <stdio.h>

int main() {
    int n, digit, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (!hasOdd)
        product = 1;

    printf("Product of odd digits = %d\n", product);

    return 0;
}
