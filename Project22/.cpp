#include <stdio.h>
int main()
{
	char teamA[] = { 'a','b','c' };
	char teamB[] = { 'x','y','z' };
	for (char i = 'x'; i <= 'z'; i++)//给a匹配x,y,z
	{
		for (char j = 'x'; j <= 'z'; j++)//给b匹配x.y.z
		{
			if (i != j)//防止a,b同时对战同一个人
			{
				for (char k = 'x'; k <='z'; k++)//给c匹配x,y,z
				{
					if (k != i && k != j)//防止a,b,c同时对战同一个人
					{
						if (i != 'x' && k != 'x' && k != 'z')//题目中的筛选条件
						{
							printf("a--%c\nb--%c\nc--%c\n", i, j, k);
						}
					}
				}
			}
		}
	}
	return 0;
}