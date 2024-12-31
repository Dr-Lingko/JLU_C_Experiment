#include <stdio.h>

int strcomp(char *s, char *t)
{
    int i = 0;
    while (*(s + i) != '\0' && *(t + i) != '\0')
    {
        i++;
    }
    if (*(s + i) == '\0' && *(t + i) == '\0')
    {
        return 0;
    }
    else if (*(s + i) < *(t + i))
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char s1[100], s2[100], s3[100], s4[100], *p1, *p2;
    int i;
    printf("请输入四个字符串:\n");
    scanf("%s%s%s%s", s1, s2, s3, s4);
    p1 = s1;
    p2 = s2;
    if (strcomp(p1, p2) > 0)
    {
        p1 = s2;
        p2 = s3;
    }
    if (strcomp(p1, p2) > 0)
    {
        p1 = s3;
        p2 = s4;
    }
    if (strcomp(p1, p2) > 0)
    {
        p1 = s4;
    }
    printf("最小的字符串是%s\n", p1);
    return 0;
}
