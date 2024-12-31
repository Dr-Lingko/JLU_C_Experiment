#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int score;
} Student;

void bubbleSort(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].score < students[j + 1].score) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void printRankings(Student students[], int n) {
    int rank = 1;
    for (int i = 0; i < n; i++) {
        if (i > 0 && students[i].score != students[i - 1].score) {
            rank = i + 1;
        }
        printf("名次: %d, 姓名: %s, 分数: %d\n", rank, students[i].name, students[i].score);
    }
}

int main() {
    int n;
    printf("请输入学生人数: ");
    scanf("%d", &n);

    Student students[n];
    for (int i = 0; i < n; i++) {
        printf("请输入第%d个学生的姓名: ", i + 1);
        scanf("%s", students[i].name);
        printf("请输入第%d个学生的分数: ", i + 1);
        scanf("%d", &students[i].score);
    }

    bubbleSort(students, n);

    printf("\n按分数高低次序显示每个学生的名次:\n");
    printRankings(students, n);

    return 0;
}