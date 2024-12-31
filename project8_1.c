#include <stdio.h>
double max(double a,double b,double c)
{
    double t;
    if(a > b)
        t = a;
    else
        t = b;
    if(c > t)
        t = c;
    
    return t;
}

int main()
{
    double i,j,k;
    printf("请输入三个数：");
    scanf("%lf %lf %lf",&i,&j,&k);
    printf("三个数中最大的数是：%lf\n",max(i,j,k));
    return 0;
}