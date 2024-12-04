#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int numStudents;
    
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    
    struct Student *students = (struct Student*)malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    int totalMarks = 0;
    
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        
        totalMarks += students[i].marks;
    }

    double average = (double)totalMarks / numStudents;
    printf("The average marks of the class is: %.2f\n", average);
    
    free(students);
    return 0;
}
