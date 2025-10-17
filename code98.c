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

    int lastSpace = -1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Result: ");

    if (isalpha(name[0]))
        printf("%c.", toupper(name[0]));

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && i < lastSpace)
            printf("%c.", toupper(name[i]));
    }

    if (lastSpace != -1)
        printf(" %s", name + lastSpace + 1);

    printf("\n");
    return 0;
}
