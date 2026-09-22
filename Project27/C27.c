#include <stdio.h>
void oppisite_order(int n)
{
	char next;
	if (n <= 1)
	{
		next = getchar();
		printf("µ¹ÐòÎª£º\n");
		putchar(next);
	}
	else
	{
		next = getchar();
		oppisite_order(n - 1);
		putchar(next);
	}
}
int main()
{
	int i = 5;
	printf("Ë³ÐòÎª£º\n");
	oppisite_order(i);
	printf("\n");
	return 0;
}