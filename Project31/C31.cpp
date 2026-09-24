#include <stdio.h>
int main()
{
	char x,j;
	printf("请输入第一个字母：");
	scanf_s("%c",&x);
	getchar();//吸收掉回车键，防止回车键填入下一次scanf
	switch (x)
	{
	case'm':
	{
		printf("这是星期一");
		break;
	}
	case'w':
	{
		printf("这是星期三");
		break;
	}
	case'f':
	{
		printf("这是星期五");
		break;
	}
	case't':
	{
		printf("请输入第二个字母：");
		scanf_s("%c", &j);
		if (j == 'u')
		{
			printf("这是星期二");
		}
		else
		{
			printf("这是星期四");
		}
		break;
	}
	case's':
	{
		printf("请输入第二个字母：");
		scanf_s("%c", &j);
		if (j == 'a')
		{
			printf("这是星期六");
		}
		else
		{
			printf("这是星期日");
		}
		break;
	}
	default:
	{
		printf("error");
		break;
	}
	return 0;
	}
}