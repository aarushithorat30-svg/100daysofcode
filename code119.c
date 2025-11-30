#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int seen[n+1];

    for(int i = 0; i <= n; i++) seen[i] = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(seen[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    return 0;
}
