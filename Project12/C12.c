#include <stdio.h>
int main()
{
	for (int i = 101; i <= 200; i++)
	{
		for (int j = 2; j < 101; j++)
		{
			if (i % j == 0)
			{
				break;
			}
			if (j == 100)
			{
				printf("%d\n", i);
			}
		}

	}
	return 0;
}