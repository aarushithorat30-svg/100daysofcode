#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee e;

    e.id = 11;
    e.joiningDate.day = 12;
    e.joiningDate.month = 5;
    e.joiningDate.year = 2020;
    strcpy(e.name, "Raj");

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", 
           e.name, e.id, e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);

    return 0;
}
