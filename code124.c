#include <stdio.h>

int main() {
    char src[50], dest[50], ch;
    FILE *fs, *fd;

    printf("Enter source filename: ");
    scanf("%s", src);

    printf("Enter destination filename: ");
    scanf("%s", dest);

    fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Source file not found");
        return 0;
    }

    fd = fopen(dest, "w");

    while ((ch = fgetc(fs)) != EOF)
        fputc(ch, fd);

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s", dest);

    return 0;
}
