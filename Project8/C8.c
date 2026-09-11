#include <stdio.h>
int main()
{
	printf("\n");
	int result = 0;
	for (int i = 1; i < 10; i++)
	{
		for (int j = i;j < 10; j++)
		{
			result = i * j;
			printf("%d*%d=%-3d", i, j, result);
			//%-3d表示左对齐，宽度为3
		}
	}
	printf("\n");
	return 0;
}
