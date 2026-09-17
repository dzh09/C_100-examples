#include <stdio.h>
int main()
{
	double init_meter = 100;
	double sum = init_meter;
	double jump_meter = init_meter * 0.5;
	for (int i = 2; i <=10; i++)
	{
			sum += init_meter;
			init_meter = init_meter * 0.5;
			jump_meter /= 2;
		
	}
	printf("共经过的距离为：%.5f", sum);
	printf("第十次反弹高度为：%.5f", jump_meter);
	return 0;
}
