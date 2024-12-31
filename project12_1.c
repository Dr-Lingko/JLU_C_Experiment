#include <stdio.h>

int main()
{
    char filename[100],a;
    printf("请输入文件名：");
    scanf("%s", filename);
    
    FILE *fp = fopen(filename, "r");
    if(fp == NULL)
    {
        printf("文件打开失败\n");
        return 0;
    }

    while((a = fgetc(fp)) != EOF)
    {
        printf("%c(%d)", a, a);
    }
    
    fclose(fp);
    return 0;
}