#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");
    char name[50];
    int age;

    scanf("%s", name);
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
