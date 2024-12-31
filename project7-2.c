#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    int i, j;
    printf("请输入字符串s1：");
    gets(s1);
    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("复制后的字符串s2为：");
    puts(s2);
}