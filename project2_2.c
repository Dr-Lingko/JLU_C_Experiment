#include <stdio.h>

int main() 
{
    float r,v;
    printf("请输入球体的半径：");
    scanf("%f", &r);
    v = 4.0 / 3.0 * 3.1415926 * r * r * r;
    printf("球体的体积为：%f\n", v);
    return 0;
}