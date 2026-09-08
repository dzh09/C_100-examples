#include <stdio.h>
int main() 
{
	double i, salary1, salary2, salary3, salary4, salary5, salary6;
	printf("请输入利润");
	scanf_s("%lf", &i);
	salary1 = 100000 * 0.1;
	salary2 = salary1 + (i - 100000) * 0.075;
	salary3 = salary2 + (i - 200000) * 0.05;
	salary4 = salary3 + (i - 400000) * 0.03;
	salary5 = salary4 + (i - 600000) * 0.015;
	salary6 = salary5 + (i - 1000000) * 0.01;

	if (i <= 100000)
	{
		printf("奖金为%lf", salary1);

	}
	else if (i <= 200000)
	{
		printf("奖金为%lf", salary2);
	}
	else if (i <= 400000)
	{
		printf("奖金为%lf", salary3);
	}
	else if(i<= 600000)
	{
		printf("奖金为%lf", salary4);
	}
	else if (i <= 1000000)
	{
		printf("奖金为%lf", salary5);
	}
	else
	{
		printf("奖金为%lf", salary6);
	}
	return 0;4
}
