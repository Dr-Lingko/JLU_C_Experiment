#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2;
    int a[3][3], b[3][3], sum[3][3];
    int i, j;

    // 打开d1.txt文件读取数据
    fp1 = fopen("d1.txt", "r");
    if (fp1 == NULL) {
        printf("无法打开文件 d1.txt\n");
        return 1;
    }

    // 读取前9个数到矩阵a
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            fscanf(fp1, "%d", &a[i][j]);
        }
    }

    // 读取后9个数到矩阵b
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            fscanf(fp1, "%d", &b[i][j]);
        }
    }

    fclose(fp1);

    // 计算两个矩阵的和
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // 打开d2.txt文件写入结果
    fp2 = fopen("d2.txt", "w");
    if (fp2 == NULL) {
        printf("无法打开文件 d2.txt\n");
        return 1;
    }

    // 将结果写入d2.txt
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            fprintf(fp2, "%d ", sum[i][j]);
        }
        fprintf(fp2, "\n");
    }

    fclose(fp2);

    // 使用DOS命令TYPE显示d2.txt
    system("type d2.txt");

    return 0;
}