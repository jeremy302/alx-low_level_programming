#include "holberton.h"

/**
 * more_numbers - prints 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	char i, j, first_digit, last_digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			first_digit = j / 10;
			last_digit = j % 10;

			if (first_digit)
				_putchar(first_digit + '0');
			_putchar(last_digit + '0');
		}
		_putchar('\n');
	}
}
