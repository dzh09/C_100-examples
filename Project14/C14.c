#include <stdio.h>
int main()
{
	int x;
	printf("请输入一个整数：");
	scanf_s("%d", &x);
	printf("%d=", x);
	for (int k = 2; k < x + 1; k++)
	{
		while (x % k == 0)
		{
			printf("%d", k);
			x /= k;
			if (x != 1)
			{
				printf("*");
			}
			else
			{
				printf("\n");
				break;
			}
		}
	}
	return 0;
}