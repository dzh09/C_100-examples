#include <stdio.h>
int main()
{
	int a=0, b=0,t, r, j;
	printf("请输入两个整数：");
	scanf_s("%d %d", &a, &b);
	if (b > a)
	{
		t = a;
		a = b;
		b = t;
	}
	r = a % b;
	j = a * b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	printf("最小公约数为：%d\n最大公倍数为%d\n", b, j / b);
	return 0;
}