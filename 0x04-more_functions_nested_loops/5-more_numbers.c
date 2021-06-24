#include "holberton.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: void
 */
void more_numbers(void)
{
	char i, first_digit, last_digit;
	
	for (i = 0; i <= 14; i++)
	{
		first_digit = i / 10;
		last_digit = i % 10;

		if (first_digit)
			_putchar(first_digit + '0');
		_putchar(last_digit + '0');
	}
	_putchar('\n');
}
