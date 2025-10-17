#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int candidate = nums[0], count = 1;
    for(int i = 1; i < n; i++) {
        if(nums[i] == candidate)
            count++;
        else
            count--;
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate)
            count++;
    }

    if(count > n / 2)
        printf("Majority element: %d\n", candidate);
    else
        printf("Majority element: -1\n");

    return 0;
}
