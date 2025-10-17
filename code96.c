#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    char *word_start = str;
    char *ptr = str;

    while (*ptr) {
        if (*ptr == ' ') {
            reverse(word_start, ptr - 1);
            word_start = ptr + 1;
        }
        ptr++;
    }

    reverse(word_start, ptr - 1);

    printf("Reversed sentence: %s\n", str);
    return 0;
}
