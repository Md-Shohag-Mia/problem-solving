#include <stdio.h>

int main() {
    int i, j;
    int grades[5][5], student_total[5], student_average[5], quiz_high[5],
        quiz_low[5], quiz_total[5];
    float quiz_average[5];
    for(j = 0; j < 5; j++) {
        quiz_high[j] = -1;
        quiz_low[j] = 101;
    }
    for(i = 0; i < 5; i++) {
        student_total[i] = 0;
        for(j = 0; j < 5; j++) {
            printf("Enter grade:);
            scanf("%d", &grades[i][j]);
            student_total[i] += grades[i][j];
            if(grades[i][j] > quiz_high[j]) quiz_high[j] = grades[i][j];
            if(grades[i][j] < quiz_low[j]) quiz_low[j] = grades[i][j];
        }
        student_average[i] = student_total[i] / 5;
        printf("Student %d Average: %d\n", i + 1, student_average[i]);
    }
        for(j = 0; j < 5; j++) {
        quiz_total[j] = 0;
        for(i = 0; i < 5; i++) {
            quiz_total[j] += grades[i][j];
        }
        quiz_average[j] = quiz_total[j] / 5.0;
        printf("%d %d %d\n", quiz_average[j], quiz_high[j], quiz_low[j]);
    }

    return 0;
}
