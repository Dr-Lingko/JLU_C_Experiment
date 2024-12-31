#include <stdio.h>
int main()
{ 
	int i,a[10],av = 0;
	
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		if((i+1)%3==0)
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<10;i++)
	{
		av+=a[i];
	}
	printf("average = %f",av/10.0);

	return 0;
}
