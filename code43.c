#include <stdio.h>

int main() {
    int n, num, digit, sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    while (num != 0) {
        digit = num % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if (sum == n)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
