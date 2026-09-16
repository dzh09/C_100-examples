#include <stdio.h>
int main()
{
	int number=0, letter=0, space=0,other=0,c=0;
	printf("请输入一个组合：");
	while ((c = getchar()) != '\n')
	{
		if (c > 'a' && c < 'z' || c>'A' && c < 'Z')
		{
			letter++;

		}
		else if (c > '0' && c < '9')
		{
			number++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	printf("字母个数：%d\n数字个数：%d\n空格个数：%d\n其他个数：%d\n", letter, number, space, other);
	return 0;
}