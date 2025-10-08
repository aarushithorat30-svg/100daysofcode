#include <stdio.h>

int main() {
    int days_late, fine = 0;

    printf("Enter the number of days the book is late: ");
    scanf("%d", &days_late);

    if (days_late <= 0) {
        printf("No fine (book returned on time or early).\n");
    } 
    else if (days_late > 30) {
        printf("Membership Cancelled\n");
    } 
    else {
        if (days_late <= 5) {
            fine = days_late * 2;
        } 
        else if (days_late <= 10) {
            fine = (5 * 2) + ((days_late - 5) * 4);
        } 
        else { // days_late between 11 and 30
            fine = (5 * 2) + (5 * 4) + ((days_late - 10) * 6);
        }

        printf("Fine ₹%d\n", fine);
    }

    return 0;
}
