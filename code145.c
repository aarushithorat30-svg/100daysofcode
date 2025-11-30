#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student topStudent(struct Student s[], int n) {
    struct Student top = s[0];
    for(int i = 1; i < n; i++) {
        if(s[i].marks > top.marks) {
            top = s[i];
        }
    }
    return top;
}

int main() {
    int n = 3;
    struct Student s[n];
    
    strcpy(s[0].name, "Riya");
    s[0].roll = 101;
    s[0].marks = 89;

    strcpy(s[1].name, "Karan");
    s[1].roll = 102;
    s[1].marks = 96;

    strcpy(s[2].name, "Meena");
    s[2].roll = 103;
    s[2].marks = 92;

    struct Student top = topStudent(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}
