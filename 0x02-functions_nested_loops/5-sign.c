#include "holberton.h"

/**
 * print_sign - checks the sign of n
 * @n: the integer to check
 *
 * Return: 1 if positive, -1 if negative, 0 if it is 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
