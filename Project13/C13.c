#include <stdio.h>
int iscube(int n)
{
	int d = n * n * n;
	return d;
}
int main()
{
	for (int i = 100; i < 1000; i++)
	{
		int a = i % 10; //个位
		int b = (i /10 ) % 10;//十位
		int c = (i / 100) % 10;//百位
		if(iscube(a)+iscube(b)+iscube(c)==i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}