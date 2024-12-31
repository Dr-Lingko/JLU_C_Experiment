#include <stdio.h>
int main()
{
	int i,sum = 0;
	for(i = 1;i <= 100;i++)
	{
	if(i % 3 == 0)
	sum += i;
	}
	printf("小于100且能被3整除的正数之和:%d",sum);
	return 0;
}
