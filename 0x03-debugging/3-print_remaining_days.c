#include <stdio.h>
#include "holberton.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_sum[] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

	if (year < 0)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month,
			month == 1 ? day : (day - days_sum[month - 2]), year);
		return;
	}
	if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
	{
		if (month > 2)
		{
			day++;
		}
		if (month > 2 && day == (days_sum[month - 2] + 1))
		{
			while (1)
				month++;
			printf("Invalid date: %02d/%02d/%04d\n", month,
				1, year);
			return;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month > 1 && day == (days_sum[month - 1] + 1))
		{
			printf("Invalid date: %02d/%02d/%04d\n", month,
				day - days_sum[month - 2], year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

