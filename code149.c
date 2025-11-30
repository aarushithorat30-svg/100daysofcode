#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));
    if(s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(s->name, "Tina");
    s->roll = 105;
    s->marks = 88;

    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    free(s);
    return 0;
}
