#include <stdio.h>

int main() {
    float att, assign1, assign2, assign3, exam;
    float assignavg, fgrade;
    printf("Enter attendance percentage: ");
    scanf("%f", &att);
    if (att < 0 || att > 100) {
        printf("Invalid attendance percentage!\n");
        return 1;
    }
    printf("Enter the score for Assignment 1: ");
    scanf("%f", &assign1);
    printf("Enter the score for Assignment 2: ");
    scanf("%f", &assign2);
    printf("Enter the score for Assignment 3: ");
    scanf("%f", &assign3);
    printf("Enter the exam score: ");
    scanf("%f", &exam);
    if (exam < 0 || exam > 100) {
        printf("Invalid exam score!\n");
        return 1;
    }
    assignavg = (assign1 + assign2 + assign3) / 3;
    if (att >= 75) {
        if (assignavg >= 50) {
            if (exam >= 40) {
                fgrade = (att * 0.1) + (assignavg * 0.3) + (exam * 0.6);
                printf("Final Grade: %.2f\n", fgrade);
                if (fgrade >= 50) {
                    printf("Congratulations! You passed the course.\n");
                } else {
                    printf("Sorry, you did not pass the course.\n");
                }
            } else {
                printf("Failed! Exam score is less than 40.\n");
            }
        } else {
            printf("Failed! Assignment average is less than 50.\n");
        }
    } else {
        printf("Failed! Attendance is less than 75%%.\n");
    }

    return 0;
}
