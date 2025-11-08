#include <stdio.h>


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
        students[i].nameOfSchool = "Default School"; // Assigning a default school name
    }

    for (int i = 0; i < 2; i++) {
        printf("\nStudent %d Information:\n", i + 1);
        printf("SSN: %s\n", students[i].person.ssn);
        printf("Last Name: %s\n", students[i].person.lname);
        printf("Grades: %d, %d, %d\n", students[i].gradeArray[0], students[i].gradeArray[1], students[i].gradeArray[2]);
        printf("School: %s\n", students[i].nameOfSchool);
    }

    return 0;
}