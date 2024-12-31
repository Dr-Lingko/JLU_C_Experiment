#include <stdio.h>
int main()
{
	int n = 1+2+4+7+11+16+22,i,sum,j;
	for(i = 0;i + 22 <= 36;i++)
	{
		sum = n + 7 * i;
		if(sum == 105)
		break;
	}
	n = i + 1;
	printf("%d",n);
	for(j = 1;j<=6;j++)
	{
		n += j;
		printf(",%d",n);
	}
	return 0;
} 
