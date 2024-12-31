#include <stdio.h>
int main()
{
	char c1,c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	printf("\n");
	putchar(c2);
	printf("\n");
	printf("%c %c",c1,c2);
	return 0;
}
