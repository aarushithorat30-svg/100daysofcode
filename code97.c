#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';

    printf("Initials: ");
    if (isalpha(name[0]))
        printf("%c.", toupper(name[0]));

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && isalpha(name[i]))
            printf("%c.", toupper(name[i]));
    }

    printf("\n");
    return 0;
}
