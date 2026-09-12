#include <stdio.h>
int main()
{
	printf("¡ò¡ò\n");
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("¡ö");
		}
		printf("\n");
	}
	return 0;
}