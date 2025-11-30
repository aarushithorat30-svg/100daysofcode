#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    char line[100];

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
