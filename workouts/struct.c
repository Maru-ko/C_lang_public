#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[20];
    char major[20];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 19;
    student1.gpa = 3.4;
    strcpy(student1.name, "Sumire");
    strcpy(student1.major, "Fashion");
    printf("%s's major is %s, her GPA is: %f and she is %d years old.\n", student1.major, student1.name, student1.gpa, student1.age);
    return 0;
}