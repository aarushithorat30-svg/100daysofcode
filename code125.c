#include <stdio.h>

int main() {
    char filename[50], text[200];
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
