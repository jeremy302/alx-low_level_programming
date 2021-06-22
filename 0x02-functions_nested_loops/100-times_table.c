#include "holberton.h"

void print_times_table(int n)
{
	int i, j, product,
		product_first_digit, product_second_digit, product_last_digit;

	for(i = 0; i <= n; i++)
	{
		for(j = 0; j <= n; j++)
		{
			product = i * j;
			product_first_digit = product / 100;
			product_second_digit = (product / 10) % 10;
			product_last_digit = product % 10;

			if(!(i == 0 && j == 0))
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar(product_first_digit == 0? ' ' : product_first_digit + '0');
			_putchar(product_second_digit == 0? ' ' : product_second_digit + '0');
			_putchar(product_last_digit + '0');

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
