#include <stdio.h>
int main()
{	
	printf("小于1000的完全数：\n");
	for (int i = 1; i <= 1000; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		
		}
		if (sum == i)
		{
			printf("%d是完全数\n",i);
		}
	}
	return 0;
}