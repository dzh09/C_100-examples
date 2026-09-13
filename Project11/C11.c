#include <stdio.h>
int main()
{
	int a = 1, b = 1;
	printf("%d\n%d\n", a, b);
	for (int i = 4; i <= 16; i++)
	{
		int c = a + b;
		printf("%d\n", c);
		a = b;
		b = c;
		c = a + b;
		printf("%d\n", c);
		a = b;
		b = c;
		
	}
	return 0;
}