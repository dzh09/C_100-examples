#include <stdio.h>
int main()
{
	long a, b, c, d, e, x;
	printf("请输入一个不超过5位的数字：\n");
	scanf_s("%ld", &x);
	a = x / 10000;
	b = x % 10000 / 1000;
	c = x % 1000 / 100;
	d = x % 100 / 10;
	e = x % 10;
	if (a != 0)
	{
		printf("该五位数倒序位: %ld %ld %ld %ld %ld ", e, d, c, b, a);
	}
	else if (b != 0)
	{
		printf("该四位数倒序位: % ld % ld % ld % ld  ", e, d, c, b);
	}
	else if (c != 0)
	{
		printf("该三位数倒序位: % ld % ld % ld ",e,d,c);
	}
	else if (d != 0)
	{
		printf("该两位数倒序位: % ld % ld ",e,d);
	}
	else if (e != 0)
	{
		printf("该四位数倒序位: % ld",e);
	}
	return 0;
}