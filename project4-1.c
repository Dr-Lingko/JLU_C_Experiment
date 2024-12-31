#include <stdio.h>
int main()
{
	int n = 0,i;
	double SUM = 0;
	printf("ÇëÊäÈënµÄÖµ£º");
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		SUM += 1.0/i;
	}
	printf("SUM = %f",SUM);
	
	return 0;
}
