#include <stdio.h>
int main()
{
    int a[3][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12}};
    int i, j, temp;
    printf("原矩阵为：\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t ", a[i][j]);
        }
        printf("\n");
    }
    printf("变换后的矩阵为：\n");
    for (i = 0; i < 3; i++)
    {
        temp = a[i][3];
        for (j = 3; j > 0; j--)
        {
            a[i][j] = a[i][j - 1];
        }
        a[i][0] = temp;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}