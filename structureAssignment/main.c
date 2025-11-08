#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ssn[12];
    char lname[50];
} Person;

typedef struct
{
    Person person;
    int gradeArray[3];
    char* nameOfSchool;
} Student;

void display(Student s[2])
{
    Student* ptr = s;

    for (int i = 0; i < 2; i++) {
        printf("SSN: %s\n", (ptr + i)->person.ssn);
        printf("Last Name: %s\n", (ptr + i)->person.lname);
        printf("Grades: %d, %d, %d\n", (ptr + i)->gradeArray[0], (ptr + i)->gradeArray[1], (ptr + i)->gradeArray[2]);
        printf("School: %s\n", (ptr + i)->nameOfSchool);
        printf("\n");
    }
}



int main()
{

    Student students[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter SSN for student %d: ", i + 1);
        scanf("%s", students[i].person.ssn);
        printf("Enter last name for student %d: ", i + 1);
        scanf("%s", students[i].person.lname);
        printf("Enter grades for student %d (3 grades): ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &students[i].gradeArray[j]);
        }
        char* schoolName = (char*)malloc(40 * sizeof(char));
        printf("Enter name of school for student %d: ", i + 1);
        scanf("%s", schoolName);
        students[i].nameOfSchool = schoolName;
    }
    display(students);

    for (int i = 0; i < 2; i++) {
        free(students[i].nameOfSchool);
    }

    return 0;
}