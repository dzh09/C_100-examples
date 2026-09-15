#include <stdio.h>
int main()
{
	int score;
	char grade;
	printf("请输入成绩:");
	scanf_s("%d", & score);
	grade=((score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C'));
	printf("成绩等级为: %c\n",grade);
	return 0;
}