#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	char digit, significant_zero = 0;
	int divisor = 1000000000;

	if (n < 0)
		_putchar('-');
	while (divisor != 0)
	{
		digit = n / divisor;
		digit = digit < 0 ? -digit : digit;
		n = n % divisor;
		divisor /= 10;

		significant_zero = significant_zero || digit != 0 || divisor == 0;
		if (!digit && !significant_zero)
			continue;
		_putchar(digit + '0');
	}
}
