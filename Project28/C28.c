#include <stdio.h>
void years_old(int i,int year)
{
	if (i == 1)
	{
		printf("ÄêÁäÎª£º%d", year);
	}
	else
	{
		year += 2;
		years_old(i - 1,year);
	}
	
}
int main()
{
	int n = 5;
	int first_year = 10;
	years_old(n,first_year);
	return 0;
}