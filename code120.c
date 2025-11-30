#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        if (i == 0 || str[i-1] == ' ')
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    printf("%s", str);
    return 0;
}
