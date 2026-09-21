#include <stdio.h>
int main()
{
	
	unsigned long long sum = 0;
	int j = 0;
	for (int i = 1; i <= 20; i++)
	{
		unsigned long long result = 1;
		for ( j = 1; j <= i; j++)
		{
			
			 result *= j;
		}
		sum += result;
	}
	printf("ÇóºÍÎª£º%llu", sum);
	return 0;
}