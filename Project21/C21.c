#include <stdio.h>
int main()
{
	int x = 1;
	int z = 0;
	int y = 1;
	for (int i = 1; i <= 9; i++)
	{
		
		y = (y + 1) * 2;
		z = y;
	}
	printf("总计个数为：%d\n", z);
	return 0;
}