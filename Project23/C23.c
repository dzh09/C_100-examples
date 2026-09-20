#include <stdio.h>
int main()
{
	int mother = 1;
	int kid = 2;
	float result=0;
	float sum = 0;
	for (int i = 1; i <= 20; i++)
	{
		int temp = 0;
		result = kid / mother;
		temp = kid;
		kid = kid + mother;
		mother = temp;
		sum += result;
	}
	printf("该数列的前二十个数之和为:%9.6f\n", sum);
	return 0;
}