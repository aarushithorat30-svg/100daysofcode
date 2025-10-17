#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int total = 0;
    for(int i = 0; i < n; i++)
        total += nums[i];

    int leftSum = 0;
    int pivot = -1;
    for(int i = 0; i < n; i++) {
        int rightSum = total - leftSum - nums[i];
        if(leftSum == rightSum) {
            pivot = i;
            break;
        }
        leftSum += nums[i];
    }

    printf("%d\n", pivot);
    return 0;
}
