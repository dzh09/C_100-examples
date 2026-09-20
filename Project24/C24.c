#include <stdio.h>
int main()
{
	for (int i = 1; i <= 4; i++)
	{
		int j = 4 - i;
		int k = 2 * i - 1;
		while (j > 0)
		{
			printf(" ");
			j--;
		}
		while (k > 0)
		{
			printf("*");
			k--;
		}
		printf("\n");
	}
	for (int a = 5; a <= 7; a++)
	{
		int b = a - 4;
		int c = 7 - b* 2;
		while (b > 0)
		{
			printf(" ");
			b--;
		}
		while (c > 0)
		{
			printf("*");
			c--;
		}
		printf("\n");
	}
	return 0;
}