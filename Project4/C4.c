#include <stdio.h>
int is_leapyear(int year)
{
	if (year % 4 == 0 & year % 100 != 0 || year & 400 == 0)
	{
		return 1;
	}
}
int main()
{
	int year=0, month=0, day=0,day_number=0;
	scanf_s("%d %d %d", &year, &month, &day);
	int month_days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (is_leapyear(year) == 1)
	{
		month_days[1] == 29;
	}
	for (int i = 0; i < month - 1; i++)
	{
		day_number += month_days[i];
	}
	day_number += day;
	printf("这是第%d天", day_number);
	
}
