#include <stdio.h>
int main()
{
	char str[100];
	int i = 0;
	char c;
	printf("������ԭ�ģ�");
	gets(str);
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] < 'z')||(str[i] >= 'A' && str[i] < 'Z'))
		{
			str[i]++;
		}
		else if(str[i] == 'z')
		str[i] = 'a';
		else if(str[i] == 'Z')
		str[i] = 'A';
		
		i++;
	}
	printf("�����ǣ�%s",str);
	
	return 0;
}
