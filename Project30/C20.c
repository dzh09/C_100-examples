#include <stdio.h>
int main()
{
	long a,b,c,d,x;
	printf("请输入一个五位数：");
	scanf_s("%ld", &x);
	a = x / 10000;
	b = x % 10000 / 1000;
	c = x % 100 / 10;
	d = x % 10;
	if (a == d && b == c)
	{
		printf("该数为回文数\n");
	}
	else
	{
		printf("该数不为回文数\n");
	}
	return 0;
}