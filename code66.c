#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n+1];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &key);

    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
    n++;

    for (int j = 0; j < n; j++)
        printf("%d ", arr[j]);
    printf("\n");

    return 0;
}
