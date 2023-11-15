#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 3
#define EXAMS 4

int minimum(const int grades[][EXAMS], int pupils, int tests) {
    int minGrade = grades[0][0];

    for (int i = 0; i < pupils; i++) {
        for (int j = 0; j < tests; j++) {
            if (grades[i][j] < minGrade) {
                minGrade = grades[i][j];
            }
        }
    }

    return minGrade;
}

int maximum(const int grades[][EXAMS], int pupils, int tests) {
    int maxGrade = grades[0][0];

    for (int i = 0; i < pupils; i++) {
        for (int j = 0; j < tests; j++) {
            if (grades[i][j] > maxGrade) {
                maxGrade = grades[i][j];
            }
        }
    }

    return maxGrade;
}

double average(const int setOfGrades[], int tests) {
    int sum = 0;

    for (int i = 0; i < tests; i++) {
        sum += setOfGrades[i];
    }

    return (double)sum / tests;
}

void printArray(const int grades[][EXAMS], int pupils, int tests) {
    for (int i = 0; i < pupils; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < tests; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int student;

    const int studentGrades[STUDENTS][EXAMS] = {
            {77, 68, 86, 73},
            {96, 87, 89, 78},
            {70, 90, 86, 81}
    };

    printf("The array is:\n");
    printArray(studentGrades, STUDENTS, EXAMS);

    printf("\n\nLowest grade: %d\nHighest grade: %d\n",
           minimum(studentGrades, STUDENTS, EXAMS),
           maximum(studentGrades, STUDENTS, EXAMS));

    printf("The average grade for student 0 is %.2f\n", average(studentGrades[0], EXAMS));
    printf("The average grade for student 1 is %.2f\n", average(studentGrades[1], EXAMS));
    printf("The average grade for student 2 is %.2f\n", average(studentGrades[2], EXAMS));

    system("pause");
    return 0;
}
