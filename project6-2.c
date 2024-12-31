#include <stdio.h>

int main()
{
	int a[11], i, j, flag = 0, t;
	printf("请输入10个整数组成的数组:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		flag = 0;
	}
	printf("排序后的数组为:");
	for (i = 0; i < 10; i++)
	{
		printf("%d,", a[i]);
	}
	printf("\n请再输入一个数");
	scanf("%d", &a[10]);
	for (i = 10; i > 0; i--)
	{
		if (a[i] > a[i - 1])
		{
			t = a[i];
			a[i] = a[i - 1];
			a[i - 1] = t;
			flag = 1;
		}
		if (flag == 0)
		{
			break;
		}
		flag = 0;
	}
	printf("排序后的数组为:");
	for (i = 0; i < 11; i++)
	{
		printf("%d,", a[i]);
	}
	return 0;
}
