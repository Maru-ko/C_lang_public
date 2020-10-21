#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 27;
    double gpa = 3.9;
    char grade = 'A';

    printf("%p\n", &age);
    printf("age: %p\nGPA: %p\nGrade: %p\n\n", &age, &gpa, &grade);
    printf("Age: %d\nGPA: %.2f\nGrade: %c\n", age, gpa, grade);
    return 0;
}