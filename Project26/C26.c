#include <stdio.h>
int calculate(int n)
{
	int result = 1;
	if (n == 0)
	{
		result = 1;
	}
	else
	{
		result = n * calculate(n - 1);
	}
	return result;
}
int main()
{
	for (int i = 0; i < 6; i++)
	{
		
		printf("%d!=%d\n", i, calculate(i));
	}
	return 0;


}