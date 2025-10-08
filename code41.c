#include <stdio.h>
#include <math.h>

int main() {
    int n, num, first, last, digits, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    last = n % 10;
    digits = (int)log10(n);
    first = n / pow(10, digits);

    result = last * pow(10, digits) + (n % (int)pow(10, digits) - last) + first;

    printf("Number after swapping first and last digit: %d\n", result);

    return 0;
}
