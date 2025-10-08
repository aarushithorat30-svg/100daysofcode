#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
