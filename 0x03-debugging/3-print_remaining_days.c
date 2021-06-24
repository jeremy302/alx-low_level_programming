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
	if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
	{
		if ((month == 3 && day == 60) || (month == 4 && day == 91)
			 || (month == 5 && day == 121) || (month == 6 && day == 152)
			 || (month == 7 && day == 182) || (month == 8 && day == 213)
			 || (month == 9 && day == 244) || (month == 10 && day == 274)
			 || (month == 11 && day == 305) || (month == 12 && day == 335))
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
			return;
		}
		if (month >= 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if ((month == 2 && day == 60) || (month == 3 && day == 91)
			 || (month == 4 && day == 121) || (month == 5 && day == 152)
			 || (month == 6 && day == 182) || (month == 7 && day == 213)
			 || (month == 8 && day == 244) || (month == 9 && day == 274)
			 || (month == 10 && day == 305) || (month == 11 && day == 335)
			 || (month == 12 && day == 366))
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

