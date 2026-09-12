#include <stdio.h>
int main()
{
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				printf("■");
				// 打印黑色方块
			}
			else
			{
				printf("  ");
				// 打印空格
			}
			
		}
		printf("\n");
	}
	return 0;
}
