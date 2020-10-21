#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age = 30;
    int * pAge =&age;
    double gpa = 3.9;
    double *pGPA = &gpa;
    char grade = 'A';
    char *aGrade = &grade;

    printf("Age's memory address: %p\n", &age);
    printf("Grades pointer variable is %p\n", aGrade);
    printf("GPA's variable pointer address: %p\n", pGPA);

    //dereference
    printf("Age deferenced pointer is: %d\n", *pAge);
    printf("Grade's defererenced pointer: %s\n", *&aGrade);
    printf("GPA dereferenced %lf\n", *&gpa);
    return 0;
}