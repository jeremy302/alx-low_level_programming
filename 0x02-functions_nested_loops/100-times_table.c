#include "holberton.h"

/**
 * print_times_table - prints the n times table
 * @n: limit
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product,
		first_digit, second_digit, last_digit;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			first_digit = product / 100;
			second_digit = (product / 10) % 10;
			last_digit = product % 10;

			if (j != 0)
			{
				_putchar(!first_digit ? ' ' : first_digit + '0');
				_putchar(!first_digit && !second_digit ?
					' ' : second_digit + '0');
			}
			_putchar(last_digit + '0');

			if (j == n)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
