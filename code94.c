#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int maxLen = 0, start = 0, wordStart = 0;
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            int len = i - wordStart;
            if (len > maxLen) {
                maxLen = len;
                start = wordStart;
            }
            wordStart = i + 1;
        }
        if (str[i] == '\0' || str[i] == '\n')
            break;
    }

    for (int i = start; i < start + maxLen; i++)
        printf("%c", str[i]);
    printf("\n");

    return 0;
}
