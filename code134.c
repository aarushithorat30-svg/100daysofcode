#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char s[20];
    scanf("%s", s);

    enum Status state;

    if (strcmp(s, "SUCCESS") == 0) state = SUCCESS;
    else if (strcmp(s, "FAILURE") == 0) state = FAILURE;
    else state = TIMEOUT;

    if (state == SUCCESS) printf("Operation successful");
    else if (state == FAILURE) printf("Operation failed");
    else printf("Operation timed out");

    return 0;
}
