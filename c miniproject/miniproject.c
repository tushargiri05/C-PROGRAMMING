#include <stdio.h>

int main() {
    int n, i;
    int marks;
    int total = 0, topScore = 0;
    float average;

    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        do {
            printf("Enter marks of student %d (0-100): ", i);
            scanf("%d", &marks);

            if (marks < 0 || marks > 100) {
                printf("Invalid marks! Please enter between 0 and 100.\n");
            }
        } while (marks < 0 || marks > 100);

        total += marks;

        if (marks > topScore)
            topScore = marks;

        if (marks >= 90)
            gradeA++;
        else if (marks >= 75)
            gradeB++;
        else if (marks >= 60)
            gradeC++;
        else if (marks >= 40)
            gradeD++;
        else
            gradeF++;
    }

    average = (float) total / n;

    printf("\n--- Class Statistics ---\n");
    printf("Average Marks: %.2f / 100\n", average);
    printf("Top Score: %d / 100\n", topScore);

    printf("\n--- Grade Distribution ---\n");
    printf("A (90-100): %d\n", gradeA);
    printf("B (75-89): %d\n", gradeB);
    printf("C (60-74): %d\n", gradeC);
    printf("D (40-59): %d\n", gradeD);
    printf("F (<40): %d\n", gradeF);

    return 0;
}
