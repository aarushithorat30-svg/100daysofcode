// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
//
// Sample Test Cases:
// Input 1:
// 3661
// Output 1:
// 1:1:1
//
// Input 2:
// 7322
// Output 2:
// 2:2:2

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;         // 1 hour = 3600 seconds
    totalSeconds = totalSeconds % 3600;  // remaining seconds after hours

    minutes = totalSeconds / 60;         // 1 minute = 60 seconds
    seconds = totalSeconds % 60;         // remaining seconds after minutes

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
