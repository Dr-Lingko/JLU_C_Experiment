#include <stdio.h>
int main()
{
	int y = 0,x = 0;
	printf("������x��ֵ��");
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
	printf("y��ֵΪ��%d",y);
	
	return 0;
}
