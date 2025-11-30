#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender g;
};

int main() {
    struct Person p;
    p.g = MALE;

    if (p.g == MALE)
        printf("Male\n");
    else if (p.g == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}
