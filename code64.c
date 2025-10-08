#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0}, max = 0, digit, mostFrequent;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n != 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostFrequent = i;
        }
    }

    printf("%d\n", mostFrequent);
    return 0;
}
