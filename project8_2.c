#include <stdio.h>
double reci(double a)
{
    return 1/a;
}

int main()
{
    double a,b,num;
    printf("请输入两个数：");
    scanf("%lf %lf",&a,&b);
    num = reci(0.5*(reci(a)+reci(b)));
    printf("两个数的调和平均数是：%lf\n",num);
    return 0;
}