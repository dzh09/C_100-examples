#include <stdio.h>
int main()
{
	int x = 0, y = 0, z = 0, middle1 = 0, middle2 = 0;
	printf("请依次输入三个数字");
	scanf_s("%d %d %d", &x, &y, &z);
	if (x > y)
	{
		middle1 = x;
		middle2 = y;
		x = middle2;
		y = middle1;
	}
	if (x > z)
	{
		middle1 = x;
		middle2 = z;
		x = middle2;
		z = middle1;
	}
	if (y > z)
	{
		middle1 = y;
		middle2 = z;
		y = middle2;
		z = middle1;
	}
	printf("从小到大顺序为%d %d %d", x, y, z);
	return 0;
}
