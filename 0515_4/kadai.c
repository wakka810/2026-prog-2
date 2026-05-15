#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 3

int calc_total(int scores[STUDENTS][SUBJECTS], int student);
double calc_average(int scores[STUDENTS][SUBJECTS], int student);

int main(void)
{
    int scores[STUDENTS][SUBJECTS];
    char *subjects[] = {"国語", "数学", "英語"};
    int i, j;

    printf("5人の学生の3教科(国語・数学・英語)の点数を入力してください。\n\n");

    for (i = 0; i < STUDENTS; i++) {
        printf("--- 学生%d ---\n", i + 1);
        for (j = 0; j < SUBJECTS; j++) {
            printf("%sの点数: ", subjects[j]);
            scanf("%d", &scores[i][j]);
        }
        printf("\n");
    }

    printf("========================================\n");
    printf(" 学生 | 国語 | 数学 | 英語 | 合計 | 平均\n");
    printf("========================================\n");

    for (i = 0; i < STUDENTS; i++) {
        int total = calc_total(scores, i);
        double avg = calc_average(scores, i);

        printf("  %d   |  %3d |  %3d |  %3d | %4d | %.1f\n",
               i + 1, scores[i][0], scores[i][1], scores[i][2], total, avg);
    }

    printf("========================================\n");

    return 0;
}

int calc_total(int scores[STUDENTS][SUBJECTS], int student)
{
    int total = 0;
    int j;

    for (j = 0; j < SUBJECTS; j++) {
        total += scores[student][j];
    }

    return total;
}

double calc_average(int scores[STUDENTS][SUBJECTS], int student)
{
    int total = calc_total(scores, student);

    return (double)total / SUBJECTS;
}
