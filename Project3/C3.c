#include <stdio.h>
int main(void)
{
	int x=0, y=0, z=0, m, n;
	m = z + y;
	n = z - y;
	for (int m = 1; m < 168 / 2 + 1; m++)
	{
		if (168 % m == 0)
		{
			n=168 / m;
			if (m > n && (m+n) % 2 == 0 && (m-n) % 2 == 0)
			{
				y = (m - n) / 2;
				x = y * y - 100;
				printf("%d\n", x);
			}
		}
	}
}