#include "holberton.h"

/**
 * jack_bauer - prints all minutes in 24 hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute,
		hour_first_digit, hour_last_digit,
		minute_first_digit, minute_last_digit;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			hour_first_digit = hour / 10;
			hour_last_digit = hour % 10;
			minute_first_digit = minute / 10;
			minute_last_digit = minute % 10;

			_putchar(hour_first_digit + '0');
			_putchar(hour_last_digit + '0');
			_putchar(':')
			_putchar(minute_first_digit + '0');
			_putchar(minute_last_digit + '0');
			_putchar('\n');
		}
	}
}
