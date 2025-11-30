#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;
    scanf("%s %d %f", st.name, &st.roll, &st.marks);

    printStudent(st);

    return 0;
}
