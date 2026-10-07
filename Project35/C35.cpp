#include <stdio.h>
void reverse(char *s)
{
	char* p = s;
	int lenth = 0;
	while (*p != 0)
	{
		lenth++;
		p++;
	}//计算数组长度
	int i = 0;
	while (i <= lenth / 2 - i)
	{
		int c;
		c = *(s + i);
		*(s + i) = *(s + lenth - i - 1);
		*(s + lenth - i - 1) = c;
		i++;
	}//首尾对位交换
}
int main()
{
	char s[] = { "www.runoob.com" };
	printf("%s=>\n", s);
	reverse(s);
	printf("%s", s);
	return 0;
}