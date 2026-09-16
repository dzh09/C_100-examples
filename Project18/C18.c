#include <stdio.h>
int main()
{	
	int a=0, b=0 ,c=0,n=0,i=1;
	printf("请输入两个值：");
	scanf_s("%d %d", &a, &n);
	c = a;
	while(i<=n)
	{
		b += a;
		a *= 10;
		a = a + c;
		i++;
		printf("结果为：%d", b);
	}
	return 0;
}