#include <stdio.h>
int main()
{
	int y = 0,x = 0;
	printf("请输入x的值：");
	scanf("%d",&x);
	if(x > -5 && x < 0)
	{
		y = x;
	}
	else if(x == 0)
	{
		y = x - 1;
	}
	else if(x > 0 && x < 10)
	{
		y = x + 1;
	}
	else
	{
		y = 100;
	}
	printf("y的值为：%d",y);
	
	return 0;
}
