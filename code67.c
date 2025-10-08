#include <stdio.h>

int main() {
    int n, pos, elem;
    scanf("%d", &n);
    int arr[n+1];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d %d", &pos, &elem);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = elem;
    n++;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
