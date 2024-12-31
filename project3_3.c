#include <stdio.h>
int main()
{
	int age = 0,cla = 0;
	printf("请输入孩子年龄:");
	scanf("%d",&age);
	switch(age)
	{
		case 2:
		case 3:cla = 1;break;
		case 4:cla = 2;break;
		case 5:
		case 6:cla = 3;break;
	} 
	if(age < 2 || age > 6)
	printf("该孩子不能进入幼儿园");
	else if(cla = 1)
	printf("age: %d, enter Lower class",age);
	else if(cla = 2)
	printf("age: %d, enter Middle class",age);
	else if(cla = 3)
	printf("age: %d, enter Higher class",age);
	
	return 0;
}
