#include "holberton.h"

/**
 * print_last_digit - returns the absolute value of x
 * @x: number whose last digit is to be printed
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int last_digit, _x;

	_x = x < 0 ? 0 - x: x;
	last_digit = _x % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
