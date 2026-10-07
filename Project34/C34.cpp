#include <stdio.h>
void Print_Hello()
{
	printf("Hello, World!\n");
}
void Print_Three_Hello()
{
	for (int count = 0; count < 3; count++)
	{
		printf("HelloWorld\n");
	}
}
int main()
{
	Print_Three_Hello();
	return 0;
}