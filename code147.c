#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    strcpy(e1.name, "Aarushi");
    e1.id = 101;
    e1.salary = 50000;

    strcpy(e2.name, "Rohan");
    e2.id = 102;
    e2.salary = 55000;

    fp = fopen("employees.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fwrite(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employees.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Employee data from file:\n");
    while(fread(&e1, sizeof(struct Employee), 1, fp)) {
        printf("Name: %s | ID: %d | Salary: %.2f\n", e1.name, e1.id, e1.salary);
    }

    fclose(fp);
    return 0;
}
