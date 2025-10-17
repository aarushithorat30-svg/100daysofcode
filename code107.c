#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous greater elements: ");
    for(int i = 0; i < n; i++) {
        int prev = -1;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if(i != n - 1)
            printf(", ");
    }
    printf("\n");
    return 0;
}
